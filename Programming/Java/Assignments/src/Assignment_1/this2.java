package Assignment_1;

public class this2 {
	int a;
	void display(int a) {
		this.a = a;
		System.out.println(a);
	}
	public static void main(String[] args) {
		this2 t = new this2();
		t.display(5);
	}

}
