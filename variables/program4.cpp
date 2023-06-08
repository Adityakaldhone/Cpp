#include <iostream>

int main() {

	int x = 10;
	std::cout<<x<<std::endl;

	{
        	int x = 20;
		std::cout<<x<<std::endl;
		std::cout<<::x<<std::endl;
		x = 30;
		std::cout<<x<<std::endl;
	}
	std::cout<<x<<std::endl;
}

/*
output:
program4.cpp:11:30: error: ‘::x’ has not been declared
   11 |                 std::cout<<::x<<std::endl;
      |                              ^
 */
