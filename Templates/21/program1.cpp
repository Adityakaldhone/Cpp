//  Templates
/*********Function Templates*************/
#include<iostream>
char min(char x , char y) {

	return(x<y)?x:y;
}
int min(int x , int y) {

	return(x<y)?x:y;
}
float min(float x , float y) {

	return(x<y)?x:y;
}
double min(double x , double y) {

	return(x<y)?x:y;
}
int main() {

	std::cout<<min('A','B')<<std::endl;
	std::cout<<min(20 , 10)<<std::endl;
	std::cout<<min(20.5f,7.5f)<<std::endl;
	std::cout<<min(20.5 , 15.7)<<std::endl;
	return 0;
}
