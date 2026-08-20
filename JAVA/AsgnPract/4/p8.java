import java.util.*;


class eight{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
	
		System.out.print("Enter your percentage: ");
		
           	float p = sc.nextInt();

		if(p>=75.0){
		
			System.out.println("Passed : First Class with Distinction");
	
		}else if(p<=75.0 && p>= 60.0){

			System.out.println("Passed : First class");
		
		}else if (p<=60.0 && p>=35.0){

			System.out.println("Passed");
	
		}else{
			System.out.println("failed");

		
		}
	
	}
}


