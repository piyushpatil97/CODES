#include<stdio.h>

void main(){


	int r;
	printf("Enter the numbers of rows: ");
	scanf("%d",&r);
	int x=1;

	for(int i=1;i<=r;i++){

		for(int j=1;j<=r;j++){

			printf("%d\t",x++);
		}
		puts("");
	}
}


