#include<stdio.h>

void main(){

	int x=10;
	int *ptr=&x;

	printf("%d\n",x); //10
	
       	printf("%p\n",ptr); // address of x 
       	
	printf("%p\n",&x); // address of x 
       	
	printf("%d\n",ptr); // address of x 
       	
	printf("%d\n",&x); // address of x 
	

	printf("%p\n",*ptr); //HexaD
	printf("%p\n",x); //HexaD
	


	printf("%d\n",*ptr); // 10
}
