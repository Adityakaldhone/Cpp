#include <iostream>

class Demo {

	public :
		int x = 10;

		Demo() {
		
			std::cout<<" In constructor" <<std::endl;
		}

		Demo(int x) {
		
			this->x = x;
			std::cout<<" In para constructor" <<std::endl;
			std::cout<<x<<std::endl;
			Demo();
		}

		void getData () {
		
			std::cout<<x<<std::endl;
		}

		~Demo() {

			std::cout<<" Destructor"<<std::endl;
		}
};


int main() {

	Demo obj(50);

	obj.getData();

	std::cout<<" End main"<<std::endl;

	return 0;
}


/*
output:
 In para constructor
 50
 In constructor
 Destructor
 50
 End main
 Destructor
 */
