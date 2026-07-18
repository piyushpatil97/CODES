#include<stdio.h>

int fun (int x, int y){

	return x+y;
}

void main(){

	int ret_val=fun(10,20);
	printf("%d\n",ret_val);
}
