#include<stdio.h>

void main(){

	int arr[]={10,20,30,40};

	int * ptr1 = arr ;
	int * ptr2 = arr+2 ;

	printf("%p\n",ptr1);  // add ptr
	printf("%d\n",*ptr1); // 10
	printf("%d\n",*ptr2); // 30
	printf("%p\n",ptr2); // add ptr2
}

