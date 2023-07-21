//Compiler generated code
#include <iostream>

template<class T>

class Template {

	T data;
	public :
		Template() {
		
			std::cout<<"In constructor"<<std::endl;
		}
};
//compiler generates below code
template<>
class Template<int> {

	int data;
	public :
		Template() {
	
			std::cout<<"In constructor"<<std::endl;
		}
};

int main() {

	Template<char>obj1;
	Template<int>obj2;
	Template<float>obj3;
	
	return 0;
}


