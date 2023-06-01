//Note: in c++ the class is by default private

//---------------------------classes and objects---------------------//
#include <iostream>

class Demo{

	int x = 10;

	void fun(){
	
		std::cout<<x<<std::endl;
	}
};

int main(){

	Demo obj;

	obj.fun();

	return 0;
}

/*
output:
program1.cpp:20:16: error: ‘void Demo::fun()’ is private within this context
   20 |         obj.fun();
      |         ~~~~~~~^~
program1.cpp:10:14: note: declared private here
   10 |         void fun(){
      |              ^~~
 */
