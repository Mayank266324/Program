package Assignment_1;

public class Const_overloading {
int a,b;
String c;
Const_overloading(){
	a=56;
	b=67;
	c="abc";
}
Const_overloading(int d, int e){
	a=d;
	b=e;
}
Const_overloading(int d, String k){
	a=d;
	c=k;
}
	public static void main(String[] args) {
		Const_overloading l= new Const_overloading();
		Const_overloading m= new Const_overloading(12,13);
		Const_overloading n= new Const_overloading(14,"abcd");
		System.out.println(l.a+" "+l.b+l.c);
		System.out.println(m.a+" "+m.b);
		System.out.println(n.a+" "+n.c);
	}

}
