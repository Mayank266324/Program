package Assignment_1;
import java.util.Scanner;
public class Palindrom {

	public static void main(String[] args) {
		int n,s=0,c,r;
		System.out.print("Enter any number: ");
		Scanner ref =new Scanner (System.in);
		n=ref.nextInt();
		c=n;
		while(n>0)
		{
			r=n%10;
			s=(s*10)+r;
			n=n/10;
		}
		if(c==s)
		{
			System.out.println("The given number is palindrom. ");
		}
		else
		{
			System.out.println("The given number is not palindrome. ");
		}
		
	}

}
