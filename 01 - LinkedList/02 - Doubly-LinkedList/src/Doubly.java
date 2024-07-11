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
            tail = node;
        }
        head = node;
        head.prev = null;   
        size ++;
    }

    public void display (){
        Node temp = head;
        Node last = null;
        for (int i = 0; i < size; i++) {
            System.out.print(temp.value + " -> ");
            last = temp; // keep pointing the temp first, until it becomes the null.
            temp = temp.next;
            
        }
        System.out.println("Null");

        System.out.println("Printing in reverse...");
        while(last != null){
            System.out.print(last.value +" -> ");
            last = last.prev;
        }

        System.out.println("START");
    }

    
}
