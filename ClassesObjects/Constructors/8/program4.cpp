//parameteized constructor


#include<iostream>

class Demo{

	public:
		Demo(){                     //No argument constructor
		
			std::cout<<" In No-Args constructor"<<std::endl;
		}

		Demo(int x){ 		   //Parameterized constructor
		
			std::cout<<"In para Constructor"<<std::endl;
		}
};

int main(){

	Demo obj1;

	Demo *obj2 = new Demo();

	Demo obj3(10);

	Demo *obj4 = new Demo(10);

	return 0;
}

/*
output:
In No-Args constructor
In No-Args constructor
In para Constructor
In para Constructor
 */
