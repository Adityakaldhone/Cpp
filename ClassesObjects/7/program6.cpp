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

	player obj1;

	player *obj2 = new player();
	obj1.Info();

	obj2->Info();
	return 0;
}



