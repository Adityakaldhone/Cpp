//-------Delete array--------//
#include <iostream>

class Demo {

	int *ptrArray = NULL;

	public :

		Demo() {
		
			ptrArray = new int[100];

			std::cout<< "In constructor"<<std::endl;
		}
		~Demo() {
		
			delete[] ptrArray;

			std::cout<<"In Destructor"<<std::endl;
		}
};

int main() {

	{
	
		Demo obj1;
	}

	return 0;
}

/*
output:
In constructor
In Destructor
 */ 
