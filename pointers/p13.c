#include<stdio.h>

void main(){
	int x=10;
	int y=20;
	int z=30;

	int * ptr1=&x;
	int * ptr2=&y;
	int * ptr3=&z;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%p\n",ptr3);
	
	printf("%p\n",&ptr1);
	printf("%p\n",&ptr2);
	printf("%p\n",&ptr3);
}


