#include<stdio.h>


void main(){


	int x;
	printf("Enter the number for whcih you want the table: ");
	scanf("%d",&x);


	for(int i=1;i<=10;i++){
		printf(" %d * %d = %d \n",x,i,i*x);
	}
	printf("\n----------------------------\n");
}
