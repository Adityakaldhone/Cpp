/*--------------------------------------------------------static member functions-------------------------------------------------------------*/
#include <iostream>

class Demo{

	int x = 10;
	static int y;

	public:

	void disp(){
	
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
	}

	static void info(){
	
		//std::cout<<x<<std::endl;  //error:
		std::cout<<y<<std::endl;
	}
};

int Demo::y =20;

int main(){

	Demo obj;

	obj.disp();
	obj.info();

	Demo::info();
	
	return 0;

}



/*
 program1.cpp: In static member function ‘static void Demo::info()’:
program1.cpp:19:28: error: invalid use of member ‘Demo::x’ in static member function
   19 |                 std::cout<<x<<std::endl;  //error:
      |                            ^
program1.cpp:6:13: note: declared here
    6 |         int x = 10;
      |             ^
 */
 

//output:
//10
//20
//20
//20
