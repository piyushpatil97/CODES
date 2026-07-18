#include<stdio.h>

void main(){

	int N;
	int size=5;

	puts("Enter number of elements : ");
	
	scanf("%d",&N);
	
	int arr[N];

	while(N!=size){

		puts("Enter correct size of array :");

		scanf("%d",&N);
	}

	puts("Enter elements of array : ");

	for(int i=0;i<N;i++){

		scanf("%d",&arr[i]);
		printf("\n");
	}

	for (int i=N-1;i>=0;i--){

		printf("%d\n",arr[i]);
	}
}



