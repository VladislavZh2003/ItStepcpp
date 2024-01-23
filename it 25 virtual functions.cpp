#include <iostream>
using namespace std;
//... : private class - inharitance the class but your kids can't inharit it, all is going private, not accesible in main and all classes down after heir
//... : protected class - all is going protected , accesible in class but not in main
//... : public class - all is accesible with his acces specifier
//Virtual functions - a function declared in base class, that may be overloaded in derived classes. Needed in pointers used for polymorphysm
//Abstract class - must have at least one pure virtual function, abstract class can't make objects

class Enemy{
  protected:    
    int attackPwr;
  public:
    void setPwr(int x){
        this->attackPwr = x;
    }
    
    virtual void attack()
    {
    	//cout<<"Enemy attack!"<<endl;
	};//May be overriden in derived class
	virtual void defence() = 0; //pure virtual function - must be overloaded in derived class
	
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout<<"Ninja - "<<attackPwr<<endl;
        }
        
        void defence()
		{
			cout<<"Ninja defence!"<<endl;
		}
};

class Monster : public Enemy{
    public:
        void attack(){
            cout<<"Monster - "<<attackPwr<<endl;
        }
        
        void defence()
		{
			cout<<"Monster defence!"<<endl;
		}
};

int main()
{
    Ninja n;
    Monster m;
    
    n.attack();
    m.attack();
    			   //if don't have virtual function
    Enemy *e1 = &n;//we can't touch inherited things 
    Enemy *e2 = &m;//e2->attack(); - can't
    
    e2->setPwr(20);
    
    n.attack();
    m.attack();
    
    e2->attack();//if we have virtual func we can make this.
    e1->defence();
    
    return 0;
}

