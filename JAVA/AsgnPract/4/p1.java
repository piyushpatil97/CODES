import java.util.*;

class one{


	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num you wanna check: ");

		int num = sc.nextInt();

		System.out.println();

		if(1<= num  && num<= 100){

			System.out.println(num +" is in the range of 1 to 100");
			System.out.println();

		}else {

			System.out.println(num + " is not int the range 1 to 100");
			System.out.println();
		}
	}


}
