#include<stdio.h>

void main(){

	int x;
	puts("Enter the numbers of rows");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){

		for(int j=1;j<=x-i+1;j++){

			if(j%2==0){
	
				printf("%c\t",65+j-i);
			}else{
				if(i==1){
				printf("%d\t",x-j+i);
			}else{
				printf("%d\t",x+j-i);
		}
			}
		}
		puts("");
	}

	puts("-----------------------------------------------");
}

