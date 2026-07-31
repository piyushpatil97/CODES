#include<iostream>

int fun(){

	std::cout<<"int fun"<<std::endl;

	return 10;
}

int main(){

	int x=fun();
	std::cout<<x<<std::endl;

	return 20;
}
