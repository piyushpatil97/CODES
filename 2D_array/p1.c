#include<stdio.h>

void main(){

    int arr[3]={10,20,30};

    
    /*
    int arr1[][]={10,20,30,40,50,60,70,80,90};*/
   
   
   //1

    int arr2[][3]={10,20,30,40,50,60,70,80,90};

    for(int i=0;i<3;i++){

	    for(int j=0;j<3;j++){
	    printf("%d\t",arr2[i][j]);
    }
	    puts("");
    }



  //2

    int arr3[3][3]={10,20,30,40,50,60,70,80,90};

    for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	    
	    	    printf("%d\t",arr3[i][j]);
	    
	    }
	    puts("");
    }

    int arr4[3][3]={{10,20,30},{40,50,60},{70,80,90}};

    for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	    
	    	    printf("%d\t",arr3[i][j]);
	    
	    }
	    puts("");

    }
}

