#include<iostream>

int main(){

	int fun(){

		       int x,y;
		       std::cout<<"Enter your NUMBERS: \n";
		       std::cin>>x>>y;
		       return 0;
	}



	int num;
	std::cout<<"Enter your choice\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.Exit\n";
	std::cin>>x;

	switch(num):
	case 1:
		       fun();
		       std::cout<<"ADDITION OF X AND Y IS : ">>x+y>>std::endl;
		      break;
	case 2:
       		      fun();
		      std::cout<<"SUBTRACTION OF X AND Y IS : "<<x-y<<std::endl;

		      break;
	case 3:
		      fun();
		      std::cout<<"MULTIPLICATION OF X AND Y IS : "<<x*y<<std::endl;
		      break;
	case 4:
		      fun();
		      std::cout<<"DIVISION OF X AND Y IS : "<<x/y<<std::endl;
	case 5:
		     std::cout<<"ENTER THE CORRECT CHOICE";


