import java.util.*;

import java.io.*;


class input{

	public static void main(String[] args) throws IOException{

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		System.out.print("Enter num1: ");
		String num1 = br.readLine();

		System.out.print("Enter num2: ");
		String num2 = br.readLine();
		
		System.out.println(num1 + num2); // as datatype is string it will just join the two numbers not add

	}
}
