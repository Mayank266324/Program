package Assignment_1;

import java.util.Scanner;

public class ExponentCalculator {
    public static void main(String[] args) {
        Scanner ab = new Scanner(System.in);
        System.out.print("Enter the base: ");
        double base = ab.nextDouble();
        System.out.print("Enter the exponent: ");
        int exponent = ab.nextInt();
        double result = Math.pow(base, exponent);
        System.out.println(base + " raised to the power of " + exponent + " is: " + result);
    }
}

