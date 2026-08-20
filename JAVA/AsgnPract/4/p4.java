import java.util.*;

class four{

	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter percentile you got : ");

		double p = sc.nextDouble();

		if(p>=85.00){
			
			System.out.println("Medical");
			System.out.println();

		}else if(p<=85.00 && p>=75.00){

			System.out.println("Engineering");
			System.out.println();
		}else if(p<=75.00 && p>=65.00){

			System.out.println("Pharmacy or Bachelor in Science");
		}else {
			System.out.println("Sheti kara bhau");
		}

	}
}





