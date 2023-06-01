#include<iostream>

void fun(int* val){

	*val = 30;
	std::cout<<val<<std::endl;
}


int main(){

	int x = 10;
	std::cout<<x<<std::endl;
	fun(x);
	std::cout<<x<<std::endl;

	return 0;
}
/*
output:

program1.cpp:14:13: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
   14 |         fun(x);
      |             ^
      |             |
      |             int
program1.cpp:3:15: note:   initializing argument 1 of ‘void fun(int*)’
    3 | void fun(int* val){
      |          ~~~~~^~~
 */
