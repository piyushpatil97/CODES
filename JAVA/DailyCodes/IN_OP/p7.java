import java.util.*;

class flat{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter Society name: ");
		String sName = sc.next();
		
		System.out.print("Enter wing: ");
		char wing = sc.next().charAt(0);
		
		System.out.print("Enter flat no: ");
		int flatNo = sc.nextInt();
		
		System.out.print("Enter rent : ");
		float rent = sc.nextFloat();

		System.out.println(sName);
		System.out.println(wing);
		System.out.println(flatNo);
		System.out.println(rent);
	}
}


