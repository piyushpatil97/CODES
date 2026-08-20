import java.util.*;

class seven{

	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the Cost price: ");

		float cp = sc.nextFloat();

		System.out.print("Enter the Selling price: ");

		float sp = sc.nextFloat();

		if (sp > cp){

			System.out.println("PROFIT: "+ (sp - cp));
	
		}else if (cp > sp){
	
			System.out.println("LOSS: "+(cp - sp));
	
		}else{
			System.out.println("NO PROFIT NO LOSS");
		}


	}
}
