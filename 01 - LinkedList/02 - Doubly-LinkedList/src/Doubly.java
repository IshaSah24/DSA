public class Doubly {
    public Node head;
    public Node tail;
    public int size;

    public Doubly(){
        this.size = 0;
    }
    private class Node {

        private Node next;
        private Node prev;
        private int value;

        public Node (int value) {
            this.value = value;
        }
        public Node(Node next, Node prev, int value) {
            this.next = next;
            this.prev = prev;
            this.value = value;
        }
    }

    public void addAtfirst (int val){
        Node node =  new Node(val);

        node.next = head;
       
        if(head != null){  // (Edge case) : This condition is for if the head itself is containing the null value, then how can the 'head.prev' can be some node? right!!
            head.prev = node;  
        }
        else{
            tail = node; // Not necessary because we are not handling the tail value anywhere expect this line....
        }
        head = node;
        head.prev = null;   
        size ++;
    }

     //method 1 -

    // public int deleteAtlast(){
    //     if (size <= 1){
    //         return -1 ;
    //     }
    //     Node pre = null;
    //     Node node =  head;
    //     for (int i = 1; i < size; i++) {
    //       node = node.next;
    //     }
    //     int val = node.value;
    //     pre = node.prev;
    //     pre.next = null;
    //     size --;
    //     return val;

    // }

    // method 2 - 
    
    public int DeleteAtLast(){
        if (size <= 1){
            return -1 ;
        }
        Node SecondLastNode  =  get(size - 2);
        int val = SecondLastNode.next.value;
        SecondLastNode.next= null;
        size--;
        return val;
    }

    public Node get(int index){
        Node node = head;
        for (int i = 0; i < index; i++) {
            node = node.next;
          }
          return node;
    }

    public void insertAtLast(int val){
        Node node = new Node (val);
        Node last = head;
        node.next =  null;

        if (head == null){
            head = node;
            head.prev = null;
            return; 
        }

        while(last.next != null){
            last = last.next;
        }
        last.next = node;
        node.prev = last;
        size++;
    }
   

    public void display (){
        Node temp = head;
        // Node last = null;
        for (int i = 0; i < size; i++) {
            System.out.print(temp.value + " -> ");
            // last = temp; // keep pointing the temp first, until it becomes the null.
            temp = temp.next;
            
        }
        System.out.println("Null");

    //Method - 1
        // System.out.println("Printing in reverse...");
        // while(last != null){
        //     System.out.print(last.value +" -> ");
        //     last = last.prev;
        // }

        // System.out.println("START");
    }

    /*Method 2
    ----------- for reversing the element using function*/

    public void PrintRev(){
        Node temp =  head;
        while (temp.next != null){
            temp =  temp.next;  // temp is pointing  to last node so no need to take extra  variable like we took in display (Node 'last') method for reversing the list of nodes.
        }
        while (temp != null){
            System.out.print(temp.value+" -> ");
            temp = temp.prev;
        }

        System.out.println("START");
    }



    public Node find(int val){
        Node temp  = head;
        while (temp != null){
            if (temp. value == val){
                return temp;
            }
            temp = temp.next;
        }
        return null;
    }

    public void addAfter(int val, int newVal){
        Node pre = find(val);

        if (pre == null){
            System.out.println("Does not present any node with value :"+ val);
            return;
        }

        Node node =  new Node(newVal);
        node.next = pre.next;
        node.prev = pre;

        if (node.next != null){
            node.next.prev = node;
        }

        pre.next= node;
        size++;
        display();
    }
}
