#include <iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:

	Demo(){
	
		std::cout<<"IN Demo constructor"<<std::endl;
	}

	void fun(){
	
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
	}
};

int main(){

	Demo obj;

	obj.fun();

	return 0;
}

/*
output:
IN Demo constructor
10
20
 */
