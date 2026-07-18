#include<stdio.h>

void main(){

	int x,y,z;
	x=10;
	y=20;
	z=30;

	int arr[]={&x,&y,&z};

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
}
