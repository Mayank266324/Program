package Assignment_1;
import java.util.Scanner;
public class Addition_array {

	public static void main(String[] args) {
		int a[]=new int[5];
		int b[]=new int[5];
		int c[]=new int[5];
		Scanner r = new Scanner(System.in);
		System.out.print("Enter elements of first array: ");
		for(int i=0;i<a.length;i++)
		{
			a[i]=r.nextInt();
		}
		System.out.print("Enter elements of second array: ");
		for(int i=0;i<b.length;i++)
		{
			b[i]=r.nextInt();
		}
		System.out.println("Sum of both arrays = ");
		for(int i=0; i<c.length;i++)
		{
			c[i]=a[i]+b[i];
			System.out.print(c[i]+" ");
		}

	}

}
