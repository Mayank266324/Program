package Assignment_1;

class A {
    void displayMethod() {
        System.out.println("I can eat");
    }
}

class b extends A {
    void displayMethodClassB() {
        System.out.println("I can walk");
    }
}

class D extends b {
    void displayMethodClassD() {
        System.out.println("I can talk");
    }
}

public class Multilevel_inheritance {
    public static void main(String[] args) {
        D dog = new D();
        dog.displayMethod();  
        dog.displayMethodClassB(); 
        dog.displayMethodClassD(); 
    }
}
