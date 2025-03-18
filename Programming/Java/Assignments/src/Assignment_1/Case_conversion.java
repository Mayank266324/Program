package Assignment_1;
import java.util.Scanner;
public class Case_conversion {

	public static void main(String[] args) {
	Scanner ab= new Scanner(System.in);
	char ch,ch2;
	System.out.println("Enter any character: ");
	ch=ab.next().charAt(0);
	if(ch>='A'&&ch<='Z') {
		ch2=Character.toLowerCase(ch);
		System.out.println("Lowercase "+ch2);
		}
	else {
		ch2=Character.toUpperCase(ch);
		System.out.println("Uppercase "+ch2);
		}
	}
}
