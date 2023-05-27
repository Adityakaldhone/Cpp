#include<iostream>

class Demo{

	private:
		int x = 10;

	public:
		int y = 20;
		
	protected:
		int z = 30;
};

int main(){

	Demo obj;
	std::cout<<obj.x<<obj.y<<obj.z<<std::endl;  //error

}


/*
 
   program1.cpp: In function ‘int main()’:
program1.cpp:18:24: error: ‘int Demo::x’ is private within this context
   18 |         std::cout<<obj.x<<obj.y<<obj.z<<std::endl;
      |                        ^
program1.cpp:6:21: note: declared private here
    6 |                 int x = 10;
      |                     ^
program1.cpp:18:38: error: ‘int Demo::z’ is protected within this context
   18 |         std::cout<<obj.x<<obj.y<<obj.z<<std::endl;
      |                                      ^
program1.cpp:12:21: note: declared protected here
   12 |                 int z = 30;
      |                     ^
 */
