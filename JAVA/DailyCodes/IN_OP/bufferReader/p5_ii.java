import java.io.*;

class input{

	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter Society Name: ");
		String socName = br.readLine();

		System.out.print("Enter Wing Name: ");	

		
		char wing = (char)br.read();

		br.skip(1);


		
	

		System.out.print("Enter Flat No: ");
		int FlatNo = Integer.parseInt(br.readLine());

		System.out.print("Enter flat rent: ");
		float rent = Float.parseFloat(br.readLine());
	
		System.out.println(socName);
		System.out.println(wing);
		System.out.println(FlatNo);
		System.out.println(rent);
	}
}


		
