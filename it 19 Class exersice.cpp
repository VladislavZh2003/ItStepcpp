#include <iostream>
//#include "Human.h"

//atributes - temporary,current condition of the obj
//Abstraction - define/including only essential data for class implementation and execution
//public members - class interface
//selection operator - ".","->"
//this
//constant objects - const oobj can't call not const methods 
//member initializer list
//composition - segmentind objects and classes into smaller parts 

class Birthday
{
	public:
		Birthday(int m, int d, int y): month(m), day(d), year(y)
		{
			
		};
		
		void PrintData()
		{
			std::cout<<"Happy BD"<<std::endl;
		}
		
	private:
		int month;
		int day;
		int year;
		
		
};

class Human
{
		int age = 10;
		const int weight = 50;
		//Birthday bd;//for class Birthday
	public:
		int height = 100;
		Birthday bd();
		Human()
		{
			std::cout<<"create"<<std::endl;
		};//';'not mandatory but good, only for constuctos
		Human(int _age, int _height)
		{
			age = _age;
			height = _height;
		};
		Human(int _weight):weight(_weight)//change const var
		{
			
		};
		Human(int _weight, int _height, int _age):weight(_weight),age(_age),height(_height)//this constructor is for const and not const variables
		{
			
		};
		
		void PrintInfo()const
		{
			std::cout<<"Age: "<<age<<std::endl<<"Height: "<<height<<std::endl;
		}
		
		void PrintInfo()
		{
			std::cout<<"Age: "<<age<<std::endl<<"Height: "<<height<<std::endl;
		}
	
};

int main()
{
	const int c = 10;
	
	Human h1;
	//cout<<h1.age<<endl;
	
	Human* ph1;//pointer for object
	ph1 = &h1;
	//std::cout<<ph1 -> age;
	
	const Human h2;
	h2.PrintInfo();
	
	
}
//lambda func - read

