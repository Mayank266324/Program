package Assignment_1;

public class Stair {

	public static void main(String[] args) {
		int i,j,k;
		for(i=1;i<=5;i++) { //Rows
			for(j=i;j<=5;j++) { //Space
				System.out.print("*");
			}
			for(k=1;k<=i;k++) { //Column
				System.out.print(" ");
			}
			System.out.print("\n");
		}
		//int i,j,k;
		//for(i=5;i>=1;i--) { //Rows
			//for(j=i;j>5;j--) { //Space
				//System.out.print(" ");
			//}
			//for(k=1;k<=i;k++) { //Column
				//System.out.print("*");
			//}
			//System.out.print("\n");
		//}

	}

}
