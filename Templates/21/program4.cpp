#include<iostream>

template<typename T , typename U>
auto min(T x , U y){
/*
	if(x<y){
	
		return x;
	}else {
	
		return y;
	}*/
	return(x<y)?x:y;
}
int main(){

	std::cout<<min(15 , 7.5f)<<std::endl;
	std::cout<<min('A', 100)<<std::endl;
	return 0;
}
