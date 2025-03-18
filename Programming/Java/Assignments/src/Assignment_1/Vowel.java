package Assignment_1;
import java.util.Scanner;

public class Vowel {
    public static void main(String[] args) {
        System.out.println("Enter any character: ");
        Scanner ab = new Scanner(System.in);
        char ch = ab.next().charAt(0);
        
        // Check for both lowercase and uppercase vowels if needed
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            System.out.println("Vowel");
        } else {
            System.out.println("Consonant");
        }
        
        ab.close();
    }
}
