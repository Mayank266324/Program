package Assignment_1;
import java.util.Scanner;

public class Matrix {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = r.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = r.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Element at (" + i + "," + j + "): ");
                matrix[i][j] = r.nextInt();
            }
        }

        System.out.println("\nThe entered matrix is:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
