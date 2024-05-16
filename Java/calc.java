public class calc {
    public static void main(String[] args) {
        fun obj = new fun();
        obj.add(10, 20);
        obj.sub(20, 10);
        obj.mul(10, 20);
        obj.div(20, 10);
    }
}

class fun {
    int z;

    void add(int x, int y) {
        z = x + y;
        System.out.println("Sum of x and y is: " + z);
    }

    void sub(int x, int y) {
        z = x - y;
        System.out.println("Difference of x and y is: " + z);
    }

    void mul(int x, int y) {
        z = x * y;
        System.out.println("Product of x and y is: " + z);
    }

    void div(int x, int y) {
        z = x / y;
        System.out.println("Division of x and y is: " + z);
    }
}
