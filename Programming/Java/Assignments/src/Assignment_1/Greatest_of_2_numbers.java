package Assignment_1;
import java.util.Scanner;
public class Greatest_of_2_numbers {

	public static void main(String[] args) {
		double a,b,c;
		Scanner ab= new Scanner(System.in);
		System.out.println("Enter the First number: ");
		a=ab.nextDouble();
		System.out.println("Enter the Second number: ");
		b=ab.nextDouble();
		c=(a>b)? a:b;
		System.out.println(c+" is the greatest number.");
	}

}
