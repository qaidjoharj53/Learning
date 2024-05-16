public class e5 {
    final String name = "Rajesh";
    final int age = 20;

    public static void main(String[] args) {
        e5 obj = new e5();
        // obj.name = "Sanjay"; Error: cannot assign a value to final variable name
        // obj.age = 25; Error: cannot assign a value to final variable age
        System.out.println("Name: " + obj.name);
        System.out.println("Age: " + obj.age);
    }
}
