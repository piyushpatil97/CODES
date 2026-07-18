#include<stdio.h>

void main(){

	int N;

	puts("Enter the number of elements of N: ");
		
	scanf("%d",&N);

	char arr[N];

	puts("Enter the elements of array :");

	for(int i=0;i<N;i++){
 
		scanf(" %c",&arr[i]);
	}

	puts("-------------------------------------------------------");
	

	for(int i=0;i<N;i++){

		printf("%d\n",arr[i]);
		
	}

}


