#include<stdio.h>

void main(){

	int arr[]={10,20,30,40,50};

	int * ptr1= arr;

	int * ptr2 = &(arr[2]);

	
	printf("%d\n",*ptr1); // 10
	printf("%d\n",*ptr2); // 30

	int * ptr3 = ptr1++;

	int * ptr4 = ++ptr2;

	printf("%d\n",*ptr3); // 10
	
	printf("%d\n",*ptr4); // 40
	
	printf("%d\n",*ptr1); // 20
	
	printf("%d\n",*ptr2); // 40
}
