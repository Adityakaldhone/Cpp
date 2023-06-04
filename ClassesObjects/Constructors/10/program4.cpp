#include <iostream>

class Demo {

	public :
		Demo() {
		
			std::cout<< "In constructor"<<std::endl;
		}

		~Demo() {
		
			std::cout<<"In destructor"<<std::endl;
		}
};

int main() {

	Demo obj1;

	Demo *obj2 = new Demo();

	std::cout<<"End main"<<std::endl;

	delete obj2;

	return 0;
}

/*
output:
In constructor
In constructor
End main
In destructor
In destructor
 */
