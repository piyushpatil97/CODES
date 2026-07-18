#include<stdio.h>

void main(){

        int x,y;

        puts("Enter the no. of row's: ");
        scanf("%d",&x);

        puts("Enter the no. of column: ");
        scanf("%d",&y);

	for(int i=1;i<=x;i++){

		for(int j=1;j<=y;j++){
			
			printf("%d\t",j);
		}
		puts("");
	}

}

