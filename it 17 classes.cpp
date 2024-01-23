#include <iostream>
using namespace std;
//Class - name,atributes,behavior - methods
//Abstraction - defining only needed data inside the class implementation
//Objects - identity,atributes,behavior - atributes are a representment of the current state
//3 principiles of OOP - Encapsulation,Inheritance,Polymorphism,"Abstraction"
//Encapsulation - hiding data - private:
//access specifier - public, private,protected
//Constructors - default,parameters,copy - name of class
class Glasses
{
	public:
		string frameMaterial;
		
		int sizeX;
		int sizeY;
		int sizeZ;
		int openAncle;
		
		int putDown = 1;
		
		void PutGlasses()
		{
			if(putDown == 1)
			{
				cout<<"Glasses are put!"<<endl;
				putDown = 2;
			}
			else
			{
				cout<<"You can't!"<<endl;
			}	
		}
		void TakeOffGlasses()
		{
			if(putDown == 2)
			{
				cout<<"Glasses are down!"<<endl;
				putDown = 1;
			}
			else
			{
				cout<<"You can't!"<<endl;
			}
		}
		
		void setOwnerName(string changeName)
		{
			ownerName = changeName;
		}
		string getOwnerName()
		{
			return ownerName;
		}
	
	private:
		string ownerName = "Tancho";
	
};

class Barberian
{
	//int age//by default is private
	public://access specifier
	int attackPts = 15;
	int defensePts = 15;
	string name = "Gondo";
	
	void attack()
	{
		cout<<name<<" attack for: "<<attackPts<<endl;
	}
	
	void defense()
	{
		cout<<name<<" defense!"<<endl;
	}
	//setters and getters//make private to use it
	void setGold(int value)//change
	{
		gold = value;
	}
	int getGold()//return
	{
		return gold = 369;
	}
	
	private:
	int gold = 369;	
	
};//always put ;

class Human
{
	public:
		Human()//default constructor//only one//wthout parameteres
		{
			cout<<"Hello World!"<<endl;
		}	
		Human(int _weight, int _height, int _age)
		{
			weight = _weight;
			height = _height;
			age = _age;
		}
		Human(int _age)
		{
			age = _age;
		}
		
		int weight;
		int height;
		int age;
		string name;
		
		void move()
		{
			
		}
		void speak()
		{
			
		}
	
};

int main()
{
	
	Barberian gondo;// Barberian=>class name // gondo => object, name of class Barberian
	gondo.attackPts = 20;
	gondo.attack();
	//cout<<gondo.gold<<endl;//can't do it because gold is private.
	int money = gondo.getGold();
	cout<<money<<endl;
	
	Human h1;
	Human h2(40,40,40);
}

