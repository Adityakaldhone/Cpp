#include<iostream>
class Company {

        int EmpCount = 5000;
        std::string name = "IBM";

        public:

        Company(){

                std::cout<<"In constructor"<<std::endl;
        }


        void CompInfo(){

                std::cout<<EmpCount<<std::endl;
                std::cout<<name<<std::endl;
        }
};
class Employee{

	int empid = 10;
	float empsal = 20.00f;

	public :

	Employee(){
	
		std::cout<<"in employee constructor "<<std::endl;
	}

	void Empinfo(){

	std::cout<<empid<<std::endl;
	std::cout<<empsal<<std::endl;
	

	Company obj;
	obj.CompInfo();
	}
};


int main(){

	Employee *obj = new Employee();
	obj->Empinfo();
}
/*
output:

in employee constructor
10
20
In constructor
5000
IBM
 */ 

















