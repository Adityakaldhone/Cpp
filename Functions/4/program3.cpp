#include <iostream>

void fun(int x,int y) {

	std::cout<<x<<" "<<y<<std::endl;
}
void fun(int x,float y) {

	std::cout<<x<<" "<<y<<std::endl;
}

int main() {

	fun(20.5,10.5);
}
/*
 output:

 program3.cpp:14:12: error: call of overloaded ‘fun(double, double)’ is ambiguous
   14 |         fun(20.5,10.5);
      |         ~~~^~~~~~~~~~~
program3.cpp:3:6: note: candidate: ‘void fun(int, int)’
    3 | void fun(int x,int y) {
      |      ^~~
program3.cpp:7:6: note: candidate: ‘void fun(int, float)’
    7 | void fun(int x,float y){
 */ 
