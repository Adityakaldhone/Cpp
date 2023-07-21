// class Template
/*****Template as an member function*****/
#include<iostream>
class AddDemo{

	public:
		template<typename T>
		T Add(T x , T y){
			
			return x+y;
		}
};
int main() {

	AddDemo obj;
	std::cout<<obj.Add(10,20)<<std::endl;
	std::cout<<obj.Add(10.5f,20.6f)<<std::endl;
	return 0;
}

