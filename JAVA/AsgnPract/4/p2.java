import java.util.*;

class two{


	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num you wanna check: ");

		int num = sc.nextInt();

		System.out.println();

		if(num % 13==0){

			System.out.println();
			System.out.println(num +" is in the the table of 13");
			System.out.println();

		}else {

			System.out.println();
			System.out.println(num + " is not in the table of 13");
			System.out.println();
		}
	}


}
