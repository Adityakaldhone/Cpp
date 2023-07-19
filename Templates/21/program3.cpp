#include<iostream>
/*template<typename T>
T min(T x , T y){

	std::cout<<"Template"<<std::endl;
	return(x<y)?x:y;
}*/

template<typename T>
T min(T x, T y);

template<>
char min<char>(char x , char y){

	std::cout<<"Template"<<std::endl;
	return(x<y)?x:y;	
}
char min(char x , char y){

	return(x<y)?x:y;	
}
int main() {

	std::cout<<min('A','B')<<std::endl;
	std::cout<<min<char>('A','B')<<std::endl;
	return 0;
}

