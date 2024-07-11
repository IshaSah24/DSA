public class Main {
    public static void main(String[] args) {
        CustomLinkedlist x = new CustomLinkedlist();
        // Insertion
        x.InsertAtFirst(10);
        x.InsertAtFirst(100);
        x.InsertAtLast(20);
        x.InsertAtLast(30);
        x.InsertAtLast(40);
        x.InsertAtLast(50);
        x.Display();

        // At purticular index 
        x.addAnywhere(60, 2);
        x.Display();
        System.out.println( "The size is : "+x.size);

    
        // Deletion
        System.out.println( "deleting first item...  : "+ x.deleteFirst());
        x.Display();
        System.out.println(x.size);

        System.out.println("Deleting last item...   : "+ x.deleteLast());
        x.Display();

        System.out.println("Deleting the index node...   : "+ x.deleteAt(2));
        x.Display();


    }
}
