public class e6 {
    public void fruits() {
        String fruits[] = { "Apple", "Banana", "Orange", "Grapes" };

        System.out.println("Fruits:");
        for (String fruit : fruits) {
            System.out.println(fruit);
        }
    }

    static void vegetables() {
        String vegetables[] = { "Potato", "Tomato", "Onion", "Carrot" };

        System.out.println("Vegetables:");
        for (String vegetable : vegetables) {
            System.out.println(vegetable);
        }
    }

    public static void main(String[] args) {
        e6 obj = new e6();
        obj.fruits();
        System.out.println();
        vegetables();
    }
}
