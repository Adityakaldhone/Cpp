#include <iostream>

int main(){

	int x = 10;
	int y = 20;

	int &ref = x;
	
	std::cout<<ref<<std::endl;
	
	ref = y;
	
	std::cout<<ref<<std::endl;
	std::cout<<x<<std::endl;
}

/*
output:
10
20
20
 */
