package Assignment_1;
import java.util.Scanner;
public class Ascending_array {

    public static void main(String[] args) {
        int a[] = new int[5];
        Scanner r = new Scanner(System.in);
        System.out.print("Enter elements in array: ");
        for (int i = 0; i < a.length; i++) {
            a[i] = r.nextInt();
        }
        
        for (int i = 0; i < a.length - 1; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        
        System.out.print("Ascending order: ");
        for (int num : a) {
            System.out.print(num + " ");
        }
    }
}
