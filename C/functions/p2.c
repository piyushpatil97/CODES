#include<stdio.h>

void main(){

	int a,b;
	int x=scanf("%d %d",&a,&b); // %d,%d
	printf("%d\n",x); //2

	int y=printf("%d %d\n",a,b); // %d,_,%d,\n,a,b

	printf("%d\n",y); // 6
}
