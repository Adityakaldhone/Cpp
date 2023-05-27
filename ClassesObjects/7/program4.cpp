/* ----------------------------------------------------------object creation -----------------------------------------------------------------*/

#include<iostream>

class player{

	int jerNo;
	std::string name;


	public:

	void Info(){
	
		std::cout<<jerNo<<" = "<<name<<std::endl;      //garbage value   and String is blanck
	}
};

int main(){

	player vk;
	vk.Info();
}
