#include<stdio.h>
void main(){

	int N;
	printf("Enter NO of elements :");
	scanf("%d",&N);

	int arr[N];

	printf("Enter the values of elements: \n");

	for(int i=0;i<N;i++){

		scanf("%d",&arr[i]);
	}
	printf("Elements of array are: \n");

	for(int i=0;i<N;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");

	for(int i=0;i<N;i++){
		if(i%2==0){
			printf("%d\n",arr[i]);
		}
	}
	printf("\n---------------------------------------------------------------------------------------\n");
}
