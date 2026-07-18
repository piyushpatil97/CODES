#include<stdio.h>
void main(){

        int N,a,count=0;
        printf("Enter NO of elements :");
        scanf("%d",&N);

        int arr[N];

        printf("Enter the values of elements: \n");

        for(int i=0;i<N;i++){

                scanf("%d",&arr[i]);
		}

        printf("\n");

	for(int i=0;i<N;i++){

		if(arr[i]%5==0){

			count++;

		
		if(count==1){


			printf("First element divisible by 5 found at index %d\n",i);
		}
		break;

		}
	}

       printf("\n--------------------------------------------------------------\n");
	
}
