#include<stdio.h>

void main(){

	int x=10;
	int *ptr1=&x;

	int *ptr2=ptr1;

	*ptr2=100;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	*ptr2=100;

	printf("%d\n",*ptr2);
	printf("%d\n",*ptr1);
	printf("%d\n",x);

}
