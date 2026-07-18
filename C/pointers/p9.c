#include<stdio.h>

void main(){

	int x=10;
	int *ptr=&x;

	printf("%d\n",x); //10
	printf("%p\n",ptr); // add
	printf("%d\n",*ptr); // 10
	

	x=50;

	printf("%d\n",x); // 50
	printf("%p\n",ptr); // add

	printf("%d\n",*ptr); // 50

	*ptr=100;

	printf("%d\n",x); //100
	printf("%p\n",ptr); // add

	printf("%d\n",*ptr); // 100

}



