//******class Template**********?//
#include<iostream>
template<class T>

class Template {

	T data;
	public:
		Template() {
		
			std::cout<<"In constructor"<<std::endl;
		}
};
int main() {

	Template<int>obj1;
	Template<double>obj2;
	Template<double> *obj3 = new Template<double>();

	std::cout<<sizeof(obj1)<<std::endl;
	std::cout<<sizeof(obj2)<<std::endl;
	std::cout<<sizeof(obj3)<<std::endl;
	
	return 0;

}



