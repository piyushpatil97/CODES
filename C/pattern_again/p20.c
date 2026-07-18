#include<stdio.h>

void main(){

	int x;
	puts("Enter the numbers of rows :");
	scanf("%d",&x);

	int num=x*2;

	for(int i=1;i<=x;i++){

		for(int spc=1;spc<=i-1;spc++){
			printf("\t");
		}

		for(int j=1;j<=x-i+1;j++){

			printf("%d\t",num--);
		}
		puts("");
	}
	puts("--------------------------------------------------------");
}
				
