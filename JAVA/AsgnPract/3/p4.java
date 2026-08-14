import java.util.*;

class in{

	public static void main (String[] args ){

		Scanner sc = new Scanner (System.in);


		System.out.print("Enter character: ");

   		char ch = sc.next().charAt(0);

		if('A'<=ch && ch<='Z'){

			System.out.println(ch + " is UPPERCASE character");

		}else{

			System.out.println(ch + " is LOWERCASE character");

		}
	}
}


