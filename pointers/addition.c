#include<stdio.h>

void main(){

	int x=10;
	int y=20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

int *	ptr3= ptr1+ptr2;

	printf("%p\n",ptr3);
}

// we cannot perform addition of two pointers
	
