#include<stdio.h>

void main(){


	int x=10;
	

	// never do this
	int *ptr; 

	printf("%d\n",x);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);

	// do this 
	
	int *ptr2=NULL;

	// never derefference null ptr

	printf("%d\n",*ptr2);// seg  fault

	
}





