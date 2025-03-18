package Assignment_1;
import java.util.Scanner;
public class Square_root {

	public static void main(String[] args) {
		int n;
		double s;
		System.out.println("Enter any number: ");
		Scanner r=new Scanner(System.in);
		n=r.nextInt();
		s=Math.sqrt(n);
		System.out.print("The square root of the given number is "+s);

	}

}
