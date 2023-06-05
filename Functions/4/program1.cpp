//---------name mangling---------//

#include <iostream>

int add(int x,int y) {      //internal call  addii();

	return x+y;
}
int add(int x,int y,int z) {   //internal call addiii();

	return x+y+z;
}
int main() {

	std::cout<<add(10,20)<<std::endl;
	std::cout<<add(10,20,30)<<std::endl;
	return 0;
}

/*
output:
30
60
 */ 
