public class DSA1 {
    public static void main(String[] args) {
        int arr[] = new int[] { 2, 4, 5, 5, 5, 5, 5 };

        for (int i = 0; i < arr.length; i++) {
            int c = 0;
            for (int j = 0; j < arr.length; j++) {
                if (i == j) {
                    continue;
                } else if (arr[i] == arr[j]) {
                    c++;
                    arr[j] = -9999;
                }
            }
            if (c > (arr.length / 2) && arr[i] != -9999) {
                System.out.println(arr[i]);
            }
        }
        int c = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == -9999) {
                c++;
            }
        }
        if (!(c > arr.length / 2)) {
            System.out.println("No majority element exists.");
        }
    }
}
