package Assignment_1;

public class const_chaining {
	const_chaining(){
		this(5);
		System.out.println("The default constructor");
	}
	
	const_chaining(int x){
		this(5,15);
		System.out.println(x);
	}
	const_chaining(int x, int y){
		System.out.println(x*y);
	}
	public static void main(String[] args) {
		const_chaining s= new const_chaining();

	}

}
