#include<stdio.h>
void main(){

	int s1,s2;
	printf("Enter size of 1st array : ");
	scanf("%d",&s1);
	
	printf("Enter size of 2nd array : ");
	scanf("%d",&s2);

	int arr1[s1];
	int arr2[s2];

	puts("Enter elements of array 1 : ");

	for(int i=0;i<s1;i++){
		
		scanf("%d",&arr1[i]);
	}

	puts("Enter elements of array 2 : ");

	for(int i=0;i<s2;i++){
		
		scanf("%d",&arr2[i]);
	}

	int flag=0;

	if(s1==s2){

		for(int i=0;i<s1;i++){

			if(arr1[i]!=arr2[i]){

				flag=1;
				break;
			}
		}
	}else{
		printf("Size is not equal hence arrays are not equal \n");
	}

	if(flag==0){

		puts("Arr1[s1] is equal to arr2[s2]");
	
	}
}
				


