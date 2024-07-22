public class A {
    public static void main(String[] args) {
        B objB = new B();
        objB.show();
        C objC = new C();
        objC.x = 10;
        objC.showValue();
    }
}

class B {

    int x;

    void show() {
        System.out.println("This is show function.");
    }
}

class C {
    void display() {
        System.out.println("This is display function.");
    }

    int x;

    void showValue() {
        System.out.println("Value of x is: " + x);
    }
}
