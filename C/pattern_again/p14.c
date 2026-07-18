#include<stdio.h>
void main(){

	int x,y;
	puts("ENter the number if rows :");
	scanf("%d",&x);
	
	puts("ENter the number if columns :");
	scanf("%d",&y);

	for(int i=1;i<=x;i++){

		for(int j=1;j<=i;j++){
			printf("%c\t",64+j);
		}
		printf("\n");
	}
	puts("----------------------------------------------");
}

