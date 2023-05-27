#include<iostream>

class player{

	int jerNo = 18;
	std::string name = "Kohli";
	

	public:
		void Info(){
		
			std::cout<<jerNo<<" = "<<name<<std::endl;
		}
};
int main(){

	player vk;
	vk.Info();
	return 0;
}



