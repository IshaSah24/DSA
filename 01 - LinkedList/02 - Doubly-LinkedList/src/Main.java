public class Main {
    public static void main(String[] args) {
        Doubly a = new Doubly();
        a.addAtfirst(18);
        a.addAtfirst(14);
        a.addAtfirst(15);
        a.addAtfirst(100);
        a.addAtfirst(7);
        System.out.print("Inserted At First : ");
        a.display();
        System.out.println("Deleted value is : "+a.DeleteAtLast());
        a.display();
        System.out.print("Reversed : ");
        a.PrintRev();
        System.out.print("Inserted at last : ");
        a.insertAtLast(90);
        a.insertAtLast(140);
        a.display();
        System.out.println("The size is : "+a.size);
    }
}
