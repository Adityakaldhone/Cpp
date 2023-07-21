#include <iostream>

class Employee {

	double sal;
	public:
		Employee(double sal){
		
			this->sal = sal;
		}
		template<typename T>
		T& Max(T& x , T& y) {
		
			if(x>y){
				return x;
			}else{
			
				return y;
			}
		}
		friend bool operator>(Employee& obj1 , Employee& obj2) {
		
			return(obj1.sal > obj2.sal);
		}
		friend std::ostream& operator<<(std::ostream& out , Employee& obj) {
		
			out<<obj.sal;
			return out;
		}
};
int main() {

	Employee ashish(200000.00);
	Employee kanha(200000.00);
	
	int x = 10;
	int y = 50;
	std::cout<<ashish.Max(ashish , kanha)<<std::endl;
	std::cout<<ashish.Max(x,y)<<std::endl;


}
