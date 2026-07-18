#include<stdio.h>

void main(){

	int x=10;

	char ch='A';


	void *vptr1=&x;
	void *vptr2=&ch;

	printf("%p\n",vptr1);
	printf("%p\n",vptr2);

	/*printf("%d\n",*vptr1);
	printf("%d\n",*vptr2);*/
	
	printf("%d\n",*((int*)vptr1));
	printf("%c\n",*((int*)vptr2));

}

