package Assignment_1;

public class Call_by_reference {
	String name;
	float mileage;
	int cost;

	public static void main(String[] args) {
		Call_by_reference a= new Call_by_reference();
		a.name="BMW";
		a.mileage = 5.5f;
		a.cost = 75000;
		System.out.println(a.name);
		System.out.println(a.mileage);
		System.out.println(a.cost);
		Call_by_reference b;
		b=a;
		System.out.println(b.name);
		System.out.println(b.mileage);
		System.out.println(b.cost);
		b.name="TATA";
		b.mileage=6.5f;
		b.cost=85000;
		System.out.println(b.name);
		System.out.println(b.mileage);
		System.out.println(b.cost);
		System.out.println(a.name);
		System.out.println(a.mileage);
		System.out.println(a.cost);
	}

}
