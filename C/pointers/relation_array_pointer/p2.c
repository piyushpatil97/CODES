#include<stdio.h>

void main(){


	int arr[]={10,20,30};

	int *ptr1 = arr;

	int *ptr2 = arr+2; // add of arr (1st element) + 2* data type = assume 1000+2*4=1000+8= 1008
	
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
}
