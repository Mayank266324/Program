package Assignment_1;
import java.util.Scanner;
public class Copy_const {
int c,d;
Copy_const(int a, int b){
	c=a;
	d=b;
	System.out.println(c+""+b);
}
Copy_const(Copy_const g){
	c=g.c;
	d=g.d;
	System.out.println(c+""+d);
}
	public static void main(String[] args) {
		int e,f;
		System.out.println("Enter the values: ");
		Scanner r= new Scanner(System.in);
		e=r.nextInt();
		f=r.nextInt();
		Copy_const h=new Copy_const(e,f);
		Copy_const k=new Copy_const(h);

	}

}
