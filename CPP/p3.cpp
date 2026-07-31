#include<iostream>

namespace c2w{

	void course1(){

		std::cout<<"c,cpp,java,python"<<std::endl;
	}
};

namespace c2w{

	void course2(){

		std::cout<<"flutter,react,springboot"<<std::endl;
	}
};

int main(){

	c2w::course1();
	c2w::course2();


	return 0;
}
