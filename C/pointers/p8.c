#include<stdio.h>

void main(){
	int x=10;

	int *ptr=x; // ptr having address as 10

	printf("%d\n",x); // 10

	printf("%p\n",ptr); // 0xa

	printf("%d\n",*ptr);  // segmentation fault

}

