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

                if(arr[i]%2==0){

                        product=product*arr[i];
                }
        }
        printf("Product of Even elements : %d",product);
        printf("\n--------------------------------------------------------------\n");
}
