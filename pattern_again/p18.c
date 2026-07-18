#include<stdio.h>

void main(){

	int x,y;

	puts("Enter the numbers of rows : ");
	scanf("%d",&x);
	
	puts("Enter the numbers of columns : ");
	scanf("%d",&y);

	int num=1;

	for(int i=1;i<=x;i++){

		for(int j=1;j<=x;j++){

			if(j%2==0){

				printf("%c\t",64+num);
			}else{
				printf("%c\t",96+num);
			}
			num++;
		}
		puts("");
	}
	printf("\n ------------------------------------------\n");
}

