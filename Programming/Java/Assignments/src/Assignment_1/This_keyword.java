package Assignment_1;

public class This_keyword {
void show() {
	System.out.println(this);
}
	public static void main(String[] args) {
		This_keyword t = new This_keyword();
		System.out.println(t);
		t.show();

	}

}
