package Assignment_1;

import java.util.Scanner;

public class AreaCalculator {

    public static void main(String[] args) {
        Scanner ab = new Scanner(System.in);
        
        System.out.println("Select the shape to calculate area:");
        System.out.println("1. Triangle");
        System.out.println("2. Circle");
        System.out.println("3. Rectangle");
        System.out.print("Enter your choice (1/2/3): ");
        int choice = ab.nextInt();
        
        double area;
        
        switch(choice) {
            case 1:
                System.out.print("Enter the base of the triangle: ");
                double base = ab.nextDouble();
                System.out.print("Enter the height of the triangle: ");
                double height = ab.nextDouble();
                area = 0.5 * base * height;
                System.out.println("The area of the triangle is: " + area);
                break;
                
            case 2:
                System.out.print("Enter the radius of the circle: ");
                double radius = ab.nextDouble();
                area = Math.PI * radius * radius;
                System.out.println("The area of the circle is: " + area);
                break;
                
            case 3:
                System.out.print("Enter the length of the rectangle: ");
                double length = ab.nextDouble();
                System.out.print("Enter the width of the rectangle: ");
                double width = ab.nextDouble();
                area = length * width;
                System.out.println("The area of the rectangle is: " + area);
                break;
                
            default:
                System.out.println("Invalid choice! Please enter a valid option.");
        }
    }
}

