package Assignment_1;
import java.util.Scanner;
public class Add_sub {

int add(int a,int b)
{
	int c= a+b;
	return c;
}

int sub(int a,int b)
{
	int c= a-b;
	return c;
}
	public static void main(String[] args) {
		int a,b;
		Scanner r= new Scanner(System.in);
		System.out.println("Enter the First number: ");
		a=r.nextInt();
		System.out.println("Enter the Second number");
		b=r.nextInt();
		Add_sub c=new Add_sub();
		System.out.println("Sum = "+c.add(a, b));
		System.out.println("Difference = "+c.sub(a, b));
	}

}
