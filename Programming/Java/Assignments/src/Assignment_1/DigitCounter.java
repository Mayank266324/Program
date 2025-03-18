package Assignment_1;
import java.util.Scanner;
public class DigitCounter {

	public static void main(String[] args) {
        Scanner ab = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = ab.nextInt();
        int count = String.valueOf(Math.abs(num)).length();
        System.out.println("Number of digits: " + count);
        
	}

}
