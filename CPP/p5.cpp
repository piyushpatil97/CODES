#include<iostream>

int swap(int x,int y){

	int temp = x;
	x=y;
	y=temp;

	std::cout<<"In swap "<<x<<" "<<y<<std::endl;

	return 0;

}



int main(){

	int x;
	int y;

	std::cout<<"Enter the value of x and y"<<std::endl;
	std::cin>>x>>y;
	std::cout<<"x & y before swap"<<x<<" "<<y<<std::endl;

	swap(x,y);
	
	std::cout<<"x & y after swap"<<x<<" "<<y<<std::endl;
	
	return 0;

}
