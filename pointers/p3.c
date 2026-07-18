#include<stdio.h>

void main() { 
	
		int x=10;
		
		// referencing
		int *ptr=&x;

		printf("%d\n",x); //10
		
	       	//dereferencing

		printf("%d\n",ptr); // address of x

		printf("%d\n",*ptr); // 10

		printf("%p\n",ptr); // address 
}
