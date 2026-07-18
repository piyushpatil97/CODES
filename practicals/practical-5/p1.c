#include<stdio.h>
void main(){

	int a,b;
	printf("from a: \n");
	scanf("%d",&a);
	printf("To b: \n");
	scanf("%d",&b);

	for(int i=a;i<=b;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n--------------------------------------------------------\n");
}
