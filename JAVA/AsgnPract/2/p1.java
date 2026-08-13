import java.util.*;

class operation{

	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number 1: ");
		int num1 = sc.nextInt();

		System.out.println("Enter number 2: ");
		int num2 = sc.nextInt();

		System.out.println("Sum is : "+ (num1 + num2));
		System.out.println("Subtraction is :"+ (num1 - num2));
		System.out.println("Multiplication is :"+ num1*num2);
		System.out.println("Division is :"+ num1/num2);
	}
}


