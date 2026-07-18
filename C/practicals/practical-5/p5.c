#include<stdio.h>

void main(){
	
	int a,b;
	long product=1;
        printf("from : ");
        scanf("%d",&a);
        printf("to : ");
        scanf("%d",&b);

        for(int i=a;i<=b;i++){
		
		if(i%2==0){
			
		
			product=product*i;
		}
	}
	printf("product= %ld",product);
	printf("\n");

}

