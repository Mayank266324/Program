package Assignment_1;

class S {
    void displayMethodClassS() { // Renamed method to match class S
        System.out.println("Inside class S");
    }
}

class B extends S {
    void displayMethodClassB() {
        System.out.println("Inside class B");
    }
}

public class single_inheritance {
    public static void main(String[] args) {
        B obj = new B();
        obj.displayMethodClassS(); // Calling method from parent class
        obj.displayMethodClassB(); // Calling method from child class
    }
}
