#include <iostream>

class Demo {

	public :
		Demo(){
		
			std::cout<<" In Constructor "<<std::endl;
		}
		Demo(int x){
		
			std::cout<<" In Para "<<std::endl;
		}

		Demo(Demo &ref){
	
			std::cout<<" In Copy "<<std::endl;
		}
};
int main(){

	Demo obj1;
	Demo obj2;
	Demo obj3;

	Demo arr[] = {obj1,obj2,obj3};

	return 0;
}

/*
output:
 In Constructor
 In Constructor
 In Constructor
 In Copy
 In Copy
 In Copy
 */
