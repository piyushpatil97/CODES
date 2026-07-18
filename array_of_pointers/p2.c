#include<stdio.h>

void main(){

	int x,y,z;
	x=10,y=10,z=30;

	int *ptr1=&x;
	int *ptr2=&y;
	int *ptr3=&z;

	int arr[]={ptr1,ptr2,ptr3};

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%p\n",ptr3);
} 
