#include<stdio.h>

void main(){

	int arr[]={10,20,30};

	printf("%d\n",arr[0]); //10
	
	int *ptr=arr;

	printf("%d\n",*ptr);  //10
	printf("%p\n",ptr);  // add arr
	
	
	printf("%p\n",arr[0]); // 10 
	printf("%p\n",arr); // add arr
}
