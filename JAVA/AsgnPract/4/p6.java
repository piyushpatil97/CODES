import java.util.*;


class six{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int age;
		System.out.print("Enter your AGE: ");

	do{
		age = sc.nextInt();
		if(age<=0){
			System.out.println("Enter the correct age: ");
	
		}else if(age>=18){

			System.out.println("Eligible for voting");
		
		}else if (age<18 && age>0){

			System.out.println("NOT Eligible fot voting");
		}
	}while(age<=0);
	}
}


