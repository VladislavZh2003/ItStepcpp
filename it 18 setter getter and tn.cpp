#include <iostream>
using namespace std;
//Data in separate files - classname.h and classname.cpp
//Pre processor - indef, define - bonus knowledge
//Destructor - not mandatory, called upon object destruction, ~classname.
class Geometric_Shapes//exersice
{
	private:
		int rectA;
		int rectB;
		int triA;
		
	public:
		void setRectA(int sideA)
		{
			rectA = sideA;
		}
		int getRectA()
		{
			return rectA;
		}
		
		void setRectB(int sideB)
		{
			rectB = sideB;
		}
		int getRectB()
		{
			return rectB;
		}
		
		void setTriA(int tSideA)
		{
			triA = tSideA;
		}
		int getTriA()
		{
			return triA;
		}
		
		void printRectangle(int row,int column)
		{
			for(int i = 0; i<row; i++)
			{
				for(int j = 0; j<column; j++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
		void printTriangle(int side)
		{
			for(int i = 0; i<side/2; i++)
			{
				for(int j = 0; j<side; j++)
				{
					if(j <= side/2+i && j >= side/2-i)
					cout<<"*";
					else
					cout<<" ";
				}
				cout<<endl;
			}
		}
		
		int S(int sideA)
		{
			return (sideA * sideA)/2;
		}
		int S(int sideA, int sideB)
		{
			return sideA * sideB;
		}
	
	
};

class Human//for copy constructor; copy constructor - copy one object to another object. 
{
	public:
		int age;
		int weight;
		int height;
		
		Human()//default constructor
		{
			cout<<"Hey"<<endl;
		}
		
		Human(int _age)//parameter constructor
		{
			age = _age;
		}
		Human(int _age, int _weight, int _height)//parameter constructor
		{
			age = _age;
			weight = _weight;
			height = _height;
		}
		
		Human(const Human &h)//object addres(const)//copy constructor
		{
			age = h.age;
			weight = h.weight;
			height = h.height;
		}
};

int main()
{
	Geometric_Shapes triangle;
	triangle.setTriA(20);
	int TR = triangle.getTriA();
	triangle.printTriangle(TR);
	cout<<"S= "<<triangle.S(TR)<<endl;
	
	Geometric_Shapes rectangle;
	rectangle.setRectA(30);
	rectangle.setRectB(12);
	int RCA = rectangle.getRectA();
	int RCB = rectangle.getRectB();
	rectangle.printRectangle(RCA,RCB);
	cout<<"S= "<<rectangle.S(RCA,RCB)<<endl;
	//^exersice
	
	Human h1(14,60,70);
	Human h2 = h1;	
	
}

