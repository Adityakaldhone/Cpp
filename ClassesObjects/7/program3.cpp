#include<iostream>

class Demo{
		int x = 10;
		int y = 20;
	protected:
		int z = 30;

	void disp(){
	
		std::cout<<x<<y<<z<<std::endl;
	}
};

int main(){

	Demo obj;
	obj.disp();  //error
	return 0;
}

/*
 
   program3.cpp: In function ‘int main()’:
program3.cpp:18:17: error: ‘void Demo::disp()’ is protected within this context
   18 |         obj.disp();  //error
      |         ~~~~~~~~^~
program3.cpp:9:14: note: declared protected here
    9 |         void disp(){
      |              ^~~~
 */
