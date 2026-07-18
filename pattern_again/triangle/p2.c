#include<stdio.h>

void main(){

	int x,y;

	puts("Enter the numbers of rows: ");
	scanf("%d",&x);
	
	puts("Enter the numbers of columns: ");
	scanf("%d",&y);
	puts("");
	int num=1;

	for(int i=1;i<=x;i++){

		for(int j=1;j<=i;j++){

			printf("%d\t",num++);
		}
		puts("");
	}
	printf("\n----------------------------------------------------\n");
}
