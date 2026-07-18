#include<stdio.h>

void fun(int N){

	int arr[N];
	puts("Enter the elements of array: ");

                for(int i=0; i<N;i++){

                        scanf("%d",&arr[i]);
                }

		puts("Here is your array: ");

			for(int i=N-1;i>=0;i--){

				printf("%d\n",arr[i]);
			}
}

void main(){

	int size=5;
	int N;
	printf("Enter number of elements in array : "); 
	scanf("%d",&N);
	
	int arr[N];

	if(N==size){

		fun(N);
	}else{ 
		while(N!=size){
			 puts("Enter the correct size of array: ");

			 scanf("%d",&N);
		}

		fun(N);

	}

}
		
