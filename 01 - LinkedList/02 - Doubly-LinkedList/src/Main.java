public class Main {
    public static void main(String[] args) {
        Doubly a = new Doubly();
        a.addAtfirst(12);
        a.addAtfirst(14);
        a.addAtfirst(15);
        a.addAtfirst(100);
        a.addAtfirst(7);
        a.display();
        System.out.println("The size is : "+a.size);
    }
}
