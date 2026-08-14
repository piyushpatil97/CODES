import java.util.*;

class seven{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num: ");

		int num = sc.nextInt();

		if (num%2==0 && num%5==0 && num%10==0){

			System.out.println(num + " is DIVISIBLE by 2 , 5 , 10");
	
		}else{

			System.out.println(num + " is not divisible by all 2 , 5 , 10");
		}


	}
}
			
