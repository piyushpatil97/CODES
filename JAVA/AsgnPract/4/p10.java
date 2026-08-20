import java.util.*;

class Mall{

	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.println("****Welcome****");
		
		
		System.out.println();
		
		System.out.println("We have Surprise for you");
		
		System.out.println();
		
		System.out.print("Enter your bill Amount here : ");

		float amt = sc.nextFloat();

		if(2000>amt && amt>=1000){
			
			System.out.println();

			System.out.println("YAYY you got 200/- off   Enjoyyyyyyy");
		
			System.out.println();
		
		}else if(5000>amt && amt>=2000){

			System.out.println();
			
			System.out.println("YAYYY you got 500/- off  Lucky Customer(: ");

			System.out.println();
	
		}else  if(amt<1000){

			System.out.println();	
	
			System.out.println("Better Luck Next Time");
		
			System.out.println();

		}else  if(amt>5000){

			System.out.println();	
	
			System.out.println("YaYYYYYY you got 1000/- off");
		
			System.out.println();
		}
	}
}
