#include<stdio.h>

void main(){
	int x=65;
	char ch='A';
		
	void *vptr1=&x;
	void *vptr2=&ch;

	/*printf("%d\n",*vptr1);
	printf("%c\n",*vptr2);

	printf("%p\n",vptr1);
	printf("%p\n",vptr2);*/
	
	printf("%d\n",*(int*)vptr1);
	printf("%c\n",*(char*)vptr2);
}



