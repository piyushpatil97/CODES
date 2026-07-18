#include<stdio.h>

void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	printf("%p\n",&(arr[0]));
	
	printf("%p\n",&(arr[0][0]));
	
	printf("%p\n",arr);
	
	printf("%d\n",*(arr[0]));
	
	printf("%d\n",arr[0][0]);
	
	printf("%d\n",*(*(arr)));
}
