package Assignment_1;
import java.util.Scanner;
public class Input_character {

	public static void main(String[] args) {
		Scanner ab = new Scanner(System.in);
		char a;
		System.out.println("Enter any character: ");
		a=ab.next().charAt(0);
		System.out.println("The character you typed is "+a);
	}

}
