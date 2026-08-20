import java.util.*;

class five{

	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.print("Enter your float value: ");

		float num = sc.nextFloat();

		if(num%6==0){

			System.out.println(num + " is divisible by 6");
		}else{
			System.out.println(num + " is not divisible by 6");
		}
	}
}
