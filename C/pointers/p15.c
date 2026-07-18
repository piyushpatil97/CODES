#include<stdio.h>

void main(){

	int arr[]={10,20,30,40,50};


	int* ptr1 = arr;

	int * ptr2 = &(arr[2]);
	
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr3);  
	printf("%d\n",*ptr4); 
	printf("%d\n",*ptr2);

	
	ptr1++;
	++ptr2;
	
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
