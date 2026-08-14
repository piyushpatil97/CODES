
import java.util.*;

class eight{

	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num1: ");
		int num1 = sc.nextInt();

		System.out.print("Enter num2 : ");
		int num2 = sc.nextInt();

		if(num1 > num2){

			System.out.println(num1+ " is Greater than "+ num2);
		}else{
			System.out.println(num2+ " is Greater than "+ num1);
		}
	}
}

