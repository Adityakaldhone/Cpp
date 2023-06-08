#include<iostream>

int main() {

	int x = 10;
	int &y;

	int *ptr = NULL;
}

/*
output:
program7.cpp:6:14: error: ‘y’ declared as reference but not initialized
    6 |         int &y;
      |              ^
 */
