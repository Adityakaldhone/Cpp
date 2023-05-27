/*-------------------------------------------------------------this pointer-------------------------------------------------------------------*/

#include<iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:

	void Info(){
	
		std::cout<<this<<std::endl;
		std::cout<<this->x<<std::endl;
		std::cout<<this->y<<std::endl;
	}
};


int main(){

	Demo obj;

	std::cout<<obj<<std::endl;             //error
	std::cout<<&obj<<std::endl;
	return 0;
}

/*
 
   program7.cpp: In function ‘int main()’:
program7.cpp:25:18: error: no match for ‘operator<<’ (operand types are ‘std::ostream’ {aka ‘std::basic_ostream<char>’} and ‘Demo’)
   25 |         std::cout<<obj<<std::endl;             //error
      |         ~~~~~~~~~^~~~~
      |              |     |
      |              |     Demo
      |              std::ostream {aka std::basic_ostream<char>}
 */
