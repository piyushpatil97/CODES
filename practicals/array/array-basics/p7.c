#include<stdio.h>
void main(){

        int N,s_e=0,s_o=0,diff=0;
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

                        s_e=s_e+arr[i];
                }else{
			s_o=s_o+arr[i];
		}
	}
	
		diff= s_e - s_o;

        printf("Diff of sum of Even and odd elements is : %d",diff);
        printf("\n--------------------------------------------------------------\n");
	
}
