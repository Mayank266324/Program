package Assignment_1;
import java.util.Scanner;
public class Avg_total_marks {

	public static void main(String[] args) {
        Scanner ab = new Scanner(System.in);
        
        // Input marks for 5 subjects
        int totalMarks = 0;
        for (int i = 1; i <= 5; i++) {
            System.out.print("Enter marks for subject " + i + ": ");
            totalMarks += ab.nextInt();
        }
        
        // Calculate average
        double averageMarks = totalMarks / 5.0;
        
        // Output results
        System.out.println("Total Marks: " + totalMarks);
        System.out.println("Average Marks: " + averageMarks);
        
	}

}
