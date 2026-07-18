#include<stdio.h>

void main(){

	int x=10,y=20,z=30;

	int *ptr1=&x;
	int *ptr2=&y;
	int *ptr3=&z;

	int **arr[]={&ptr1,&ptr2,&ptr3};

	for(int i=0;i<3;i++){

		printf("%d\n",arr[i]);
		printf("%d\n",*arr[i]);
		printf("%d\n",*(*(arr[i])));
	}
}

