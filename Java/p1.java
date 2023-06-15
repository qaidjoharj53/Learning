import java.util.*;

class p1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("What is your name? ");
        String i = sc.nextLine();
        sc.close();
        System.out.println("Hello " + i);
    }
}