#include<stdio.h>
void main(){

        int N,product=1;
        printf("Enter NO of elements :");
        scanf("%d",&N);

        int arr[N];

        printf("Enter the values of elements: \n");

        for(int i=0;i<N;i++){

                scanf("%d",&arr[i]);
        }

        printf("\n");

        for(int i=0;i<N;i++){

                if(i%2==1){

			product=product*arr[i];
		}
	}

                        

        printf("PRODUCT of odd elements is : %d",product);
        printf("\n--------------------------------------------------------------\n");

}	
