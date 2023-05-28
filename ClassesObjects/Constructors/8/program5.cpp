//Copy constructor


#include<iostream>

class Demo{

	public:
		Demo(){
		
			std::cout<<"in No-args constructor"<<std::endl;
		}

		Demo(int x){
		
			std::cout<<"in para constructor"<<std::endl;
		}

		Demo(Demo &xyz){
		
			std::cout<<"in copy constructor"<<std::endl;
		}
};

int main(){

	Demo obj1;	   //calling no argument constructor
	Demo obj2(obj1);   //default copy constructor call
	Demo obj3(10);	   //call to the parameterized constructor
	Demo obj4 = obj1;  //copy constructor call
}


/*
output:
in No-args constructor
in copy constructor
in para constructor
in copy constructor
 */
