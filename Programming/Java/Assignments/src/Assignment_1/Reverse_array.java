package Assignment_1;
import java.util.Scanner;
public class Reverse_array {

	public static void main(String[] args) {
		int a[]=new int[5];
		Scanner r = new Scanner(System.in);
		System.out.print("Enter elements in array: ");
		for(int i=0;i<a.length;i++)
		{
			a[i]=r.nextInt();
		}
		System.out.println("Array elements: ");
		for(int i=0;i<a.length;i++)
		{
			System.out.println(a[i]+" ");
		}
		System.out.println("Reversed array: ");
		for(int i=a.length-1;i>=0;i--) {
			System.out.println(a[i]+" ");
		}
	}

}
