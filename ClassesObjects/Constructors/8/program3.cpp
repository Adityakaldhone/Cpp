/*----------------------------------Constructors---------------------*/

//there are three types of constructors in cpp 1).no-argument 2).parameterized 3).Copy constructor


#include <iostream>

class Demo{

	public:
		Demo(){
		
			std::cout<<"In constructor"<<std::endl;
			std::cout<<this<<std::endl;
			
		}
};

int main(){

	Demo obj;
	std::cout<<&obj<<std::endl;

	return 0;
}

//o/p:
/*In constructor
0x7ffe78f639e7
0x7ffe78f639e7*/



