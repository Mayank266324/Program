package Assignment_1;

public class reference_method_chaining {
	reference_method_chaining methodone() {
		System.out.println("Method one");
		return this;
	}
	reference_method_chaining methodtwo() {
		System.out.println("Method two");
		return this;
	}
	reference_method_chaining methodthree() {
		System.out.println("Method three");
		return this;
	}
	public static void main(String[] args) {
		reference_method_chaining m = new reference_method_chaining();
		m.methodone().methodthree().methodtwo();
	}

}
