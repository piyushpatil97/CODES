import java.util.*;


class nine{


	public static void main(String [] args){

		Scanner sc = new Scanner(System.in);



		System.out.println("Enter the nth day of the week");

		int day;
	

		do{
			day = sc.nextInt();

		switch(day){

			case 1: 
				System.out.println("MONDAY");
				break;
			case 2: 
				System.out.println("TUESDAY");
				break;
			case 3: 
				System.out.println("WEDNESDAY");
				break;
			case 4: 
				System.out.println("THURSDAY");
				break;
			case 5: 
				System.out.println("FRIDAY");
				break;
			case 6: 
				System.out.println("SATURDAY");
				break;
			case 7: 
				System.out.println("SUNDAY");
				break;

			default: 
				System.out.println("Enter the correct input");
				break;
		}

	}while(day < 1 || day > 7);
	}
}

