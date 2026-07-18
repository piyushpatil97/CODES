#include<stdio.h>

void main(){

        int x,y;

        puts("Enter the no. of row's: ");
        scanf("%d",&x);

        puts("Enter the no. of column: ");
        scanf("%d",&y);
	int num=1;

        for(int i=1;i<=x;i++){

                for(int j=1;j<=y;j++){

			if(j%2==0){

				printf("%c\t",96+num);
			}else{
				printf("%c\t",64+num);

			}
				num++;
			

		}
		puts("");
	}
}
