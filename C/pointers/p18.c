#include<stdio.h>

void main(){

	int x=65;
	char ch ='A';

	int *ptr1=&ch;
	char *ptr2=&x;

	printf("%d\n",*ptr1);
	printf("%c\n",*ptr2);
}

