package Assignment_1;
import java.util.Scanner;

public class Sum_of_Matrixes {

    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int row = r.nextInt();
        System.out.println("Enter the number of columns: ");
        int col = r.nextInt();

        int[][] matrix = new int[row][col];
        int[][] s = new int[row][col];
        int[][] t_matrix = new int[col][row];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print("Element at (" + i + "," + j + "): ");
                matrix[i][j] = r.nextInt();
            }
        }

        System.out.println("\nThe entered matrix is:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                t_matrix[j][i] = matrix[i][j];
            }
        }

        System.out.println("\nTransposed Matrix is:");
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                System.out.print(t_matrix[i][j] + " ");
            }
            System.out.println();
        }

        if (row == col) {
            System.out.println("\nThe sum of transpose and original matrix is:");
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    s[i][j] = matrix[i][j] + t_matrix[i][j];
                    System.out.print(s[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            System.out.println("\nAddition not possible as the original and transpose matrices have different dimensions.");
        }
    }
}
