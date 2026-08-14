import java.util.*;

class otp{

	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num: ");

		int num = sc.nextInt();

		if(num%2==0){

			System.out.println(num + " is EVEN");
		}else{
			System.out.println(num + " is ODD");
		}
	}
}



