#include<stdio.h>

int main(){

	int i,j;

	int arr[5]={23,12,45,28,10};

	for(i=0;i<5;i++){
		
		int min;
		min=i;

		for(j=i+1;j<5;j++){

			if(arr[min]>arr[j]){

			min = j;

	
			}
		}
		
		

		int temp;

		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;



	
	
	}

                for(int r=0;r<5;r++){

                printf("%d\n",arr[r]);

		}
}



