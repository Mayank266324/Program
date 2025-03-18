package Assignment_1;

import java.util.Scanner;

public class Sum_of_n_natural_numbers {

	public static void main(String[] args) {
		int n,i,sum=0;
		Scanner ab=new Scanner(System.in);
		System.out.println("Enter the value of n: ");
		n=ab.nextInt();
		System.out.println("The Sum of first "+n+" natural numbers is: ");
		for(i=1;i<=n;i++) {
			sum=sum+i;
		}
		System.out.println(sum);
	}

}
