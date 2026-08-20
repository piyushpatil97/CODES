import java.util.*;

class six{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter num1: ");

		int num1 = sc.nextInt(); // no error at compile time but error if entered any value excluding integer

		System.out.println(num1);

		int num2 = 30.50f;  // compile time error possible lossy conversion

		int num3 = sc.next.Float();;  // compile time error possible lossy conversion
		
		int num4 = sc.nextInt(); //INOPUT 
					 //1. Shashi -> error Mismatch Exception
					 //2. 20.50  -> error Mismatch Exception
					 //3. A      -> error mismatch Exception
	
		// but 
	
		int x = 'A'; // no error 
			     

	}

}
