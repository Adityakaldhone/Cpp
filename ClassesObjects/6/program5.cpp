//------------object creation------------------//

#include <iostream>
class Company {

	int EmpCount = 5000;
	std::string name = "IBM";

	public:

	Company(){
	
		std::cout<<"In constructor"<<std::endl;
	}

	
	void EmpInfo(){
	
		std::cout<<EmpCount<<std::endl;
		std::cout<<name<<std::endl;
	}
};

int main(){

	Company *obj = new Company();
	(*obj).EmpInfo();
}


/*
output:
root@LAPTOP-382C9LGN:~/Cpp/Cpp/ClassesObjects/6# ./a.out
In constructor
5000
IBM
 */
