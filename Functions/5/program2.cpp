#include <iostream>

void fun(int* val){

	*val = 30;
	std::cout<<val<<std::endl;
}


int main(){

	int x = 10;
	std::cout<<x<<std::endl;
	fun(&x);
	std::cout<<x<<std::endl;

	return 0;
}

/*
output:
10
0x7ffdd2475ec4
30
*/ 
