import java.util.*;

class six{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num: ");

		int num = sc.nextInt();

		if (num%3==0){

		
			System.out.println(num + " is DIVISIBLE by 3");
	
		}else if(num%7==0){

			System.out.println(num + " is DIVISIBLE by 7");

		}else{

			System.out.println(num + " is Neither divisible by 3 nor by 7");
		}


	}
}
			
