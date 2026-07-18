#include<stdio.h>

void main(){

	int a,b,sum=0;
	printf("from : ");
	scanf("%d",&a);
	printf("to : ");
	scanf("%d",&b);

	for(int i=a;i<=b;i++){
		
		sum=sum+i;
	}
	printf("\n");
	printf("sum= %d",sum);
	printf("\n---------------------------------------------\n");
}
				
		
