package Assignment_1;

public class Call_by_value {

	public static void main(String[] args) {
		int a=1000;
		System.out.println(a);
		int b;
		b=a;
		System.out.println(b);
		b=2000;
		System.out.println(b);
		System.out.println(a);

	}

}
