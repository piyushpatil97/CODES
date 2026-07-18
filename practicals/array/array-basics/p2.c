#include<stdio.h>
void main(){

        int N,sum=0;
        printf("Enter NO of elements :");
        scanf("%d",&N);

        int arr[N];

        printf("Enter the values of elements: \n");

        for(int i=0;i<N;i++){

                scanf("%d",&arr[i]);
        }

	printf("\n");

	for(int i=0;i<N;i++){

		if(i%2==0){

			sum=sum+arr[i];
		}
	}
	printf("Sum of Even Indexed elements : %d",sum);
	printf("\n--------------------------------------------------------------\n");
}
