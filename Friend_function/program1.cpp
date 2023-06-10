//===Friend Function==//
#include <iostream>

class Demo {

	int x = 10;

	protected :
	int y = 20;

	public:
		Demo() {
		
			std::cout<<"Constructor"<<std::endl;
		}

		void getData() {
		
			std::cout<<x<<std::endl;
			std::cout<<y<<std::endl;
		}

		friend void accessData(const Demo& obj);

};

void accessData(const Demo& obj) {

	std::cout<<obj.x<<std::endl;
	std::cout<<obj.y<<std::endl;
}

int main() {

	Demo obj;
	obj.getData();
	accessData(obj);
	obj.getData();

	return 0;
}

/*
output:
Constructor
10
20
10
20
10
20
 */ 
