package Assignment_1;

import java.util.Scanner;

public class n_even_natural_numbers {

	public static void main(String[] args) {
		int n,i;
		Scanner ab=new Scanner(System.in);
		System.out.println("Enter the value of n: ");
		n=ab.nextInt();
		System.out.println("The even numbers from 0 to "+n+" is: ");
		for(i=0;i<=n;i++) {
			if(i%2==0){
				System.out.println(i);
			}
		}


	}

}
