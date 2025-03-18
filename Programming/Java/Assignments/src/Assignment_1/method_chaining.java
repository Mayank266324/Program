package Assignment_1;

public class method_chaining {
	void methodone() { //Instance method
		System.out.println("method one");
	}
	int methodtwo() { // Primitive Instance Method
		this.methodone(); //Here "this" is implicitly provided by compiler
		System.out.println("int method");
		return 0;
	}
	String methodthree() { // Non-Primitive Instance Method
		this.methodtwo();
		System.out.println("String method");
		return null;
	}
	public static void main(String[] args) {
		method_chaining m =new method_chaining();
		m.methodthree();
	}

}
