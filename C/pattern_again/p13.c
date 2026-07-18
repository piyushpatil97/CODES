#include<stdio.h>

void main(){

	int x;
	int count=0;
	puts("Enter the number :");

	scanf("%d",&x);

	puts("factors are: ");

	for(int i=1;i<x;i++){

		if(x%i==0){

			printf("%d\n",i);
			count++;
		}
	}

	if(count ==1){
		puts("Number is  prime");
	}else{
		puts("Number is not prime");
	}

}

