#include<stdio.h>

void main(){

	int size;
	printf("ENter the size of array: ");

	scanf("%d",&size);

	int arr[size];

	puts("Enter the elements of array: ");

	for(int i=0;i<size;i++){
		printf("ENter the %d place element: ",i);
		scanf("%d",&arr[i]);
		puts("");
	}

	int i=0;

	do{
		printf("Sum of %d place and %d place element of array is : %d\n",i,size-i-1,arr[i]+arr[size-i-1]);
		i++;

	}while(i<(size/2));
}


