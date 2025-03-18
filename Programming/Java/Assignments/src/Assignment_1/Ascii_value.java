package Assignment_1;
import java.util.Scanner;
public class Ascii_value {

	public static void main(String[] args) {
		char a;
		Scanner ab= new Scanner(System.in);
		System.out.println("Enter the Character you want to know ASCII value of: ");
		a=ab.next().charAt(0);
		int b = a;
		System.out.println("ASCII value of "+ a +" is "+b);

	}

}
