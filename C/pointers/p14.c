#include<stdio.h>
void main(){

	int arr[]={10,20,30};

	int *ptr = arr;

	int *ptr2 = NULL;

	
	printf("%d\n",*ptr); //10
	printf("%p\n",ptr);

	ptr2 = ptr + 1;

	printf("%d\n",*ptr2); // 20

	printf("%p\n",ptr2);

}	
