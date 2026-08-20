import java.util.*;

class input{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter Society Name: ");
		String socName = sc.nextLine();

		System.out.print("Enter Wing Name: ");	
		char wing = sc.next().charAt(0);	

		System.out.print("Enter Flat No: ");
		int FlatNo = sc.nextInt();

		System.out.print("Enter flat rent: ");
		float rent = sc.nextFloat();
	
		System.out.println(socName);
		System.out.println(wing);
		System.out.println(FlatNo);
		System.out.println(rent);
	}
}


		
