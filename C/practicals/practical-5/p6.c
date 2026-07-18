#include<stdio.h>
void main(){

	int a;
	printf("ENter your number: \t");
	scanf("%d",&a);

	if(a%2==0){
		
		printf("NUMBER IS EVEN\n");
		printf("\n");
		for (int i=1;i<=10;i++){

			printf("%d * %d = %d\n",a,i,a*i);
		}
		printf("\n-----------------------------------------------------\n");
		
	}else if (a%2==1){
		
		printf("NUMBER IS ODD\n");
		printf("\n");
		for (int i=10;i>0;i--){

			printf("%d * %d = %d\n",a,i,a*i);
		}
		printf("\n-----------------------------------------------------\n");
	}
}
