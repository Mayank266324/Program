package Assignment_1;

public class Parameterized_const {
int c,d;
Parameterized_const(int a,int b){
	c=a;
	d=b;
}
void show() {
	System.out.println(c+""+d);
}
	public static void main(String[] args) {
		Parameterized_const c= new Parameterized_const(5,6);
		c.show();
	}
}