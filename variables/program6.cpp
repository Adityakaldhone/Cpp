//===reference variable==//
#include <iostream>

int main() {

	int x = 10;

	int &y = x;

	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
}

/*
output:
root@LAPTOP-382C9LGN:~/Cpp/Cpp/variables# ./a.out
10
10
 */
