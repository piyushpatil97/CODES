import java.util.*;

class nine{
	
	public static void main(String[] args){


		Scanner py = new Scanner(System.in);

		System.out.print("Enter the value of a: ");
		int a = py.nextInt();
		
		System.out.print("Enter the value of b: ");
		int b = py.nextInt();
		
		System.out.print("Enter the value of c: ");
		int c = py.nextInt();

		if (a*a + b*b == c*c){

			System.out.println("Its Pythagorean Triplate");
		}else{
			System.out.println("Not a Pythagorean Triplate");
		}
		py.close();
	}
}



