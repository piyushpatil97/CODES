import java.util.*;

class operation{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter value of a: ");
		int a = sc.nextInt();
		
		System.out.println("Enter value of b: ");
		int b = sc.nextInt();

		System.out.println("a+=3:"+ (a+=3));
		System.out.println("b-=2:"+ (b-=2));
		System.out.println("a*=2:"+ (a*=2));
		System.out.println("b/=3:"+ (b/=3));
		System.out.println("a%=5:"+ (a%=5));

	}
}





