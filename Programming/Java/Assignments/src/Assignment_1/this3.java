package Assignment_1;

public class this3 {
	int b;
	this3(){
		this(5); // used to call the parameterized constructor
		System.out.println("Welcome");
	}
	this3(int a){
		b=a;
		System.out.println(b);
	}
	public static void main(String[] args) {
		this3 y = new this3();
	}

}
