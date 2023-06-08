//===variables===//
#include <iostream>

int main() {

	int x = 10;   //copy initialization
	
	int y(20); //direct initialization
	

	int z{30};  //uniform/brace initialization
	
	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
	std::cout<<z<<std::endl;
	return 0;

}

/*
output:
program2.cpp:12:20: error: narrowing conversion of ‘2.05e+1f’ from ‘float’ to ‘int’ [-Wnarrowing]
   12 |         int b{20.5f};
      |                    ^
 */ 
