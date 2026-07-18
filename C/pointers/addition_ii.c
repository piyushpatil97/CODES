#include<stdio.h>

void main(){

	int arr[]={10,20,30};

	arr[2]=50;

	for(int i=0;i<3;i++){

		printf("%d\n",*(arr+i));
	}
}
