#include <iostream>

void Fun(int &ref1, int &ref2){

	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

	std::cout<<ref1<<std::endl;
	std::cout<<ref2<<std::endl;
}
int main(){

	int x = 10;
	int y = 20;
	
	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
	
	Fun(x,y);

	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
}

/*
output:


 */
