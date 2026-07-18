#include<stdio.h>

void main(){

	int r,c;

	int sum=0;
	
	puts("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&r);
	
	puts("ENTER THE NUMBER OF COLUMNS : ");
	scanf("%d",&c);
        

	int arr[r][c];

	printf("%ld\n",sizeof(arr));

	puts("Enter array elements:");

	for(int i=0;i<r;i++){

		for(int j=0;j<c;j++){

			scanf("%d",&arr[i][j]);
		}
	}
	puts("");

	for(int i=0;i<r;i++){

		for(int j=0;j<c;j++){

			printf("%d\t",arr[i][j]);
		}
		puts("");
	}

	puts("");


	for(int i=0;i<r;i++){

		for(int j=0;j<c;j++){

			if(i==j){

				sum+=arr[i][j];
			}
		}
	}

	printf("SUM IS %d\n",sum);
}
