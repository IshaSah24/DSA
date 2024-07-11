// import java.util.LinkedList;

public class CustomLinkedlist {

    private Node head;
    private Node tail;
    public int size;

    
    public CustomLinkedlist() {
        this.size = 0;
    }


    private class Node {
        private int value;
        private Node next;

        public Node (int value, Node next) {
            this.value = value;
            this.next = next;
        }

        public Node(int value) {
            this.value = value;
        }
    }

    public void addAnywhere(int value, int index){
        if (index ==  0){
            InsertAtFirst(value);
        }
        else if (index  == size){
            InsertAtLast(value);
        }
        else if(index > size){
            System.out.println("Invalid input");
            return;
        }
        else {
            Node temp = head;
            //iterate the nodes
            for (int i = 1 ; i < index; i++){
                temp =  temp.next;
            }
            Node node =  new Node (value , temp.next);
            temp.next = node;    
            size ++ ; 
        }
    }
    public void InsertAtLast(int value){
        if (tail == null){
            System.out.println("Insert at first then go for the last");
            InsertAtFirst(value);
            return;
        }

        Node  node  = new Node (value);
        tail.next = node;
        tail  = node;
        size ++; 

    }

    public void InsertAtFirst(int val){
        Node node = new Node(val);
        node.next = head;
        head = node;

        if (tail == null){
            tail = head;
        } 
       size++;
    }


    public void Display(){
        Node temp = head;
        while (temp!=null){   // temp is holding the address of the current 'node' that it is pointing to.
            System.out.print(temp.value+" -> ");
            temp = temp.next;
        }   
       
        System.out.print("Null");
        System.out.println();
    }
    
    
    public int deleteFirst() {
        int val = head.value;
        head =  head.next;
        if (head.next == null){
            tail = null;
        }
        size--;
        return val;
    }
    // public int deleteLast() {
    //     if (size <= 1){
    //         return deleteFirst();
    //     }

    //     Node temp = head;
    //     for (int i = 2; i < size; i++) {
    //         temp = temp.next;
    //     }     
    //     int val = tail.value;
    //     tail = temp;
    //     temp.next =  null;
    //     return val;
    // }

    //Deleting the last item via refference of the previouse node.

    public int deleteLast() {
        if (size == 0){
            return -1;
        }
        else if(size == 1){
            deleteFirst();
        }
       Node secondLast =  get(size - 2);
       int val = tail.value;
       tail = secondLast;
       secondLast.next = null;
       size --;
       return val ; 
    }

    public Node get(int index){
        Node node =  head ;
        for(int i = 0; i < index ; i++){
            node = node.next;
        }
        return node;
    }

    public int deleteAt(int index){
        if (size <= 1){
            return deleteFirst();
        }
        else if(index > size){
            System.out.println("Invalid input");
            return -1;
        }
        else if (index == size){
            return deleteLast();
        }

        Node temp = head;
        for (int i = 1; i < index; i++) {
            temp = temp.next;
        }     
        int val = temp.next.value;
        temp.next = temp.next.next;
        return val;
    }
}
 
