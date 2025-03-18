package Assignment_1;
import java.util.Scanner;
public class Factorial {

	public static void main(String[] args) {
		Scanner ab = new Scanner(System.in);
        
        // Input number
        System.out.print("Enter a number: ");
        int num = ab.nextInt();
        
        // Calculate factorial
        long factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        
        // Output result
        System.out.println("Factorial of " + num + " is: " + factorial);
	}

}
