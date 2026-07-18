#include<stdio.h>

void main(){

	int N;
	printf("Enter array size: ");
	scanf("%d",&N);

	char arr[N];

	printf("Enter the elements of array: \n");

	for(int i=0;i<N;i++){

		scanf("%c",arr[i]);
	}
	
	for(int i=0;i<N;i++){


		if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){

			printf("%c\t",arr[i]);
			printf("%d",i);
		}
	}
}
			

	

