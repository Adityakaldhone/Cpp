
//====== variable shadowing======//
//	       ||
//	       ||
//	||-------------||
//	||	       ||
//	local	     global 
//	variable     level
//	shadowing   shadowing
#include <iostream>
int main() {

	int x = 10;
	
	{
	
		int x = 20;
		std::cout<<x<<std::endl;
	}
		std::cout<<x<<std::endl;
}
/*
output:
20
10
 */ 
