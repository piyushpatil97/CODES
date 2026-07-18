#include<stdio.h>

void main(){

        int x,y;

        puts("Enter the no. of row's as X: ");
        scanf("%d",&x);

        puts("Enter the no. of column as Y: ");
        scanf("%d",&y);

	int num=65;

	for(int i=1;i<=x;i++){

		for(int j=1;j<=y;j++){

			printf("%c\t",num++);

		}
		
	puts("");
	}
}
