package Assignment_1;

public class inverted_stairs_pattern {

	public static void main(String[] args) {
		int i,j,k;
		for(i=1;i<=5;i++) { //Rows
			for(j=i;j<5;j++) { //Space
				System.out.print(" ");
			}
			for(k=1;k<=i;k++) { //Column
				System.out.print("*");
			}
			System.out.print("\n");

		}
	}
}