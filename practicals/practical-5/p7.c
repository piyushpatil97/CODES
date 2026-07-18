#include<stdio.h>
void main(){
		int a,b;
		printf("From : ");
		scanf("%d",&a);
		printf("TO : ");
		scanf("%d",&b);

		for(int i=a;i<=b;i++){
	
			if(i%2==1){

				printf("%d\n",i*i*i);
			}
		}
}


