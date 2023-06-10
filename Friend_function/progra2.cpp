//===MutualFriends===//
#include <iostream>
class Two;
class One {
	int x = 10;

	protected :
	int y = 20;
	public :
		one() {
		
			std::cout<<"One Constructor"<<std::endl;
		}
	private:
		void getData() const {
		
			Std::cout<<x<<Std::endl;
			Std::cout<<y<<Std::endl;
		}
		friend void accessData(const Two& obj1 ,const One& obj2);
};
class Two {
	int a = 10;
	protected :
	int b = 20;

	public :
		Two() {
		
			std<<"Two constructor"<<std::endl;
		}
	private:
		getData() const {
		
			std::cout<<a<<std::endl;
			std::cout<<b<<std::endl;
		}	
};
void accessData(const Two& obj1 ,const One& obj2) {

	obj1.getData();
	obj2.getData();
}
int main() {

	Two obj1;
	One obj2;

	accessData(obj1,obj2);
	return 0;

}
