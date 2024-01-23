#include <iostream>
//this - pointer to self / equivalent to obj *p = &ibj1
//friend - access to private members from outside the class - both function and other classes can be "friend"

class A
{
	public:
		int age;
		A()
		{
			std::cout<<"A class created!"<<std::endl;
		};
};

class B
{
	private:
		int weight = 10;
		friend void getWeight(B &obj);
		friend class A;//A can access B
	public:
		int height;
		A a1;
		
		B()
		{
			std::cout<<"B class created!"<<std::endl;
		};
		B(int height,int weight)
		{
			this->height = height;
			this->weight = weight;
		};
		B(int height):height(height){};
		
		void GetWeight()
		{
			std::cout<<weight<<std::endl;
			std::cout<<this->weight<<std::endl;
			std::cout<<(*this).weight<<std::endl;
		}
		
		void setWeight(int weight)
		{
			weight = weight;
		}
	
};
void getWeight(B &obj)//access from everywhere
{
	obj.weight = 20;
	std::cout<<obj.weight<<std::endl;
}

int main()
{
	B be;
	getWeight(be);
}

