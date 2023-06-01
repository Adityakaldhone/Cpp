//Note: in c++ the class is by default private

//---------------------------classes and objects---------------------//
#include <iostream>

class Demo{

	int x = 10;
	
	public:
	
	void fun(){
	
		std::cout<<x<<std::endl;
	}
};

int main(){

	Demo obj;

	obj.fun();

	return 0;
}

/*
output:
10
 */
