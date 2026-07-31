
import java.util.Scanner;

public class main{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of array:");

		int n = sc.nextInt();

		int[] arr=new int[n];

		System.out.println("Enter the elements of array: ");

		for(int i=0;i<n;i++){

			arr[i]=sc.nextInt();
		}

		int temp=arr[0];

		for(int i=0;i<n;i++){

			if(arr[i]>temp){

				temp=arr[i];
			}
		}

		System.out.println("Largest element in array is "+temp);
		sc.close();
	}
}

