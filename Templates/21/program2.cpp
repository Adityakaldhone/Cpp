//  Templates
/*********Function Templates*************/
#include<iostream>
template<typename T>
T min(T x , T y) {

	return(x<y)?x:y;
}

int main() {

	std::cout<<min('A','B')<<std::endl;
	std::cout<<min(20 , 10)<<std::endl;
	std::cout<<min(20.5f,7.5f)<<std::endl;
	std::cout<<min(20.5 , 15.7)<<std::endl;
	return 0;
}
