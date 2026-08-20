import java.util.*;

class three{


	public static void main(String[] args){


		Scanner sc = new Scanner(System.in);

		System.out.print("Enter character you wanna check: ");

		char ch = sc.next().charAt(0);

		System.out.println();

		if('A'==ch || 'a'==ch || 'E'==ch || 'e'==ch || 'I'==ch || 'i'==ch ||'O'==ch || 'o'==ch || 'U'==ch || 'u'==ch){

			System.out.println();

			System.out.println(ch +" is VOWEL");


		}else {

			System.out.println(ch + " is CONSONUNT");

			System.out.println();
		}
	}
}
