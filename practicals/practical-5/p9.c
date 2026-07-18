#include<stdio.h>
void main(){

        for(int i=1;i<10;i++){
                if(i%2==1){
                        printf("%c\n",96+i);
                }else if(i%2==0){
                        printf("%c\n",64+i);
                }
        }
        printf("\n---------------------------------------------------\n");
}
