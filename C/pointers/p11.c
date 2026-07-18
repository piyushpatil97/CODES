#include<stdio.h>

void main(){

	int arr[]={10,20,30};

	printf("%d\n",arr[0]); //10

	int *ptr=&(arr[0]);

	printf("%p\n",ptr); //address of arr[0]
	
	printf("%d\n",*ptr); //10
 
	printf("%d\n",*arr); //10


}
