/*/----------------------variables--------------//
			    ||
		            ||
	     ||-------------------------||
	     ||                         ||
   Non-static/instance             static/class


we cannot initialize static variables in class only write their declaration
*/

#include <iostream>

class Demo{

	int x = 10;                           //non static variable

	static int y = 20;			//static variable

	public:

	void fun(){
	
		std::cout<<x<<std::endl; 
		std::cout<<y<<std::endl;   //error
	}
};
/*
output:
program4.cpp:18:20: error: ISO C++ forbids in-class initialization of non-const static member ‘Demo::y’
   18 |         static int y = 20;                      //static variable
      |
*/


