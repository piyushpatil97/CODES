import java.util.*;


class operation{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter num1 : ");

		int num1 = sc.nextInt();

		System.out.println("Enter num2: ");

		int num2 = sc.nextInt();

		System.out.println(num1 & num2); // 1
		System.out.println(num1 | num2); // 7
		System.out.println(num1 ^ num2); // 6
		System.out.println(num1 << 1); // 10
		System.out.println(num1 >> 1); // 1

	}
}
