#include<stdio.h>

void main(){

	int x,y;

	puts("Enter the numbers of rows: ");
	scanf("%d",&x);
	
	puts("Enter the numbers of columns: ");
	scanf("%d",&y);

	for(int i=1;i<=x;i++){

		for(int j=1;j<=(x-i+1);j++){

			printf("*\t");
		}
		puts("");
	}
	printf("\n----------------------------------------------------\n");
}
