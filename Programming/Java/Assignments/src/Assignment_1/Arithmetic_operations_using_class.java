package Assignment_1;
import java.util.Scanner;

public class Arithmetic_operations_using_class {
    static int a, b;

    static void add() {
        int c = a + b;
        System.out.println("Sum = " + c);
    }

    static void subtract() {
        int c = a - b;
        System.out.println("Subtract = " + c);
    }

    static void multiplication() {
        int c = a * b;
        System.out.println("Multiplication = " + c);
    }

    static void division() {
        if (b == 0) {
            System.out.println("Error: Division by zero is not allowed.");
        } else {
            double c = (double) a / b;
            System.out.println("Division = " + c);
        }
    }

    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        
        System.out.print("Enter the First number: ");
        a = r.nextInt();

        System.out.print("Enter the Second number: ");
        b = r.nextInt();

        add();
        subtract();
        multiplication();
        division();

        r.close();
    }
}