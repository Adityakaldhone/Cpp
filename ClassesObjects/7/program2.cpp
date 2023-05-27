#include<iostream>

class Demo{

	public:
		int x = 10;
		int y = 20;
		
	protected:
		int z = 30;
};

int main(){

	Demo obj;
	std::cout<<obj.x<<obj.y<<obj.z<<std::endl; 
	return 0;
}
/*
   program2.cpp: In function ‘int main()’:
program2.cpp:16:38: error: ‘int Demo::z’ is protected within this context
   16 |         std::cout<<obj.x<<obj.y<<obj.z<<std::endl;
      |                                      ^
program2.cpp:10:21: note: declared protected here
   10 |                 int z = 30;
      |                     ^
 */
