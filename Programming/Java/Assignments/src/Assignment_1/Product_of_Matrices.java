package Assignment_1;
import java.util.Scanner;

public class Product_of_Matrices {

    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);

        System.out.println("Enter the number of rows for first matrix: ");
        int row1 = r.nextInt();
        System.out.println("Enter the number of columns for first matrix (and rows for second matrix): ");
        int col1 = r.nextInt();

        System.out.println("Enter the number of columns for second matrix: ");
        int col2 = r.nextInt();

        int[][] matrix1 = new int[row1][col1];
        int[][] matrix2 = new int[col1][col2];
        int[][] product = new int[row1][col2];

        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                System.out.print("Element at (" + i + "," + j + "): ");
                matrix1[i][j] = r.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < col1; i++) {
            for (int j = 0; j < col2; j++) {
                System.out.print("Element at (" + i + "," + j + "): ");
                matrix2[i][j] = r.nextInt();
            }
        }

        System.out.println("\nFirst Matrix:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                System.out.print(matrix1[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("\nSecond Matrix:");
        for (int i = 0; i < col1; i++) {
            for (int j = 0; j < col2; j++) {
                System.out.print(matrix2[i][j] + " ");
            }
            System.out.println();
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                product[i][j] = 0;
                for (int k = 0; k < col1; k++) {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        System.out.println("\nProduct of the matrices:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                System.out.print(product[i][j] + " ");
            }
            System.out.println();
        }
    }
}
