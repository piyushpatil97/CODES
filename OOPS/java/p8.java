import java.util.Scanner;

public class main{

        public static void main(String[] args){

                Scanner sc = new Scanner (System.in);

                System.out.println("ENter the number of rows: ");
                int n=sc.nextInt();

        for(int i=1;i<=n;i++){

		for(int spc=1;spc<=n-i;spc++){
			
			System.out.print(" ");
			
		}
		for(int j=1;j<=n;j++){


                System.out.print("*"+" ");
        }
                System.out.println();
        }
	}
}

