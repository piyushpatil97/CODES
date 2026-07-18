#include<stdio.h>
void main(){
        int x;
        int y;

        puts("ENter number of rows as x:");
        scanf("%d",&x);

        puts("ENter number of column as y:");
        scanf("%d",&y);

	int num=1;

	for(int i=1;i<=x;i++){

		for(int j=1;j<=y;j++){

			printf("%d\t",num++);
			
		}
		printf("\n");
	}
}


