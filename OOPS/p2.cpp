#include<iostream>

int addition(int a,int b){

	std::cout<<"ADDITION is : "<<a+b<<std::endl;

	return 0;
}

int main(){

	int x,y;
	std::cout<<"Enter the two numbers: \n";
	std::cin>>x>>y;

	addition(x,y);

	return 0;
}
