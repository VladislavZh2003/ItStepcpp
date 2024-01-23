#include <iostream>

//class Daughter : public Mother, public Father //for multiply inharitance
//acess specifiar - this is for you (public,...)
//protected - can acess by inheritance but is private

//public - has inheritance // достъпно и се наследва
//private - has not inheritance // не е достъпно и не се наследява
//protected - has inheritance but like private atributes // не е достъпно, но се наследява

class Animate
{
	private:
		int height;
		int weight;
		
		int hungCount;
	public:
		bool hungry;
		
		Animate()
		{
			this->hungry = true;
			this->height = 20;
			this->weight = 4;
			this->hungCount = 0;
			
			std::cout<<"Mother - constructor"<<std::endl;
		};
		Animate(bool _hungry)
		{
			this->hungry = _hungry;
			this->height = 20;
			this->weight = 4;
			this->hungCount = 3;
		};
		Animate(const Animate &an)
		{
			this->hungry = an.hungry;
			this->height = an.height;
			this->weight = an.weight;
		};
		
		setHeight(int _height)//!!!!!!!
		{
			this->height = _height;
		}
		getHeight()//!!!!!!!!!
		{
			return this->height;
		}
		
		setWeight(int _weight)
		{
			this->weight = _weight;
		}
		getWeight()
		{
			return this->weight;
		}
		
		void Eat()
		{
			if(hungry == true)
			{
				hungry = false;
				hungCount++;
				if(hungCount%4 == 0)
				{
					weight++;
					height += 2;
				}
			}
		}
		
		void Move()
		{
			this->hungry = true;
		}
		
		Animate operator+(const Animate &an)
		{
			Animate anima;
			anima.hungCount = this->height / an.weight;
			return anima;
		}
		
		~Animate()
		{
			std::cout<<"Mother - destructor"<<std::endl;
		};
	
};

class Animal : public Animate
{
	private:
		std::string gender;
	protected:
		int eyes;
	public:
		int limbs;
		int moveSpeed;
		
		Animal()
		{
			this->gender = "female";
			this->limbs = 4;
			this->moveSpeed = 3;
			
			std::cout<<"Daughter - constructor"<<std::endl;
		};
		Animal(std::string _gender, int _moveSpeed)
		{
			this->gender  = _gender;
			this->moveSpeed = _moveSpeed;
			this->limbs = 4;
		};
		Animal(const Animal &anim)
		{
			this->gender  = anim.gender;
			this->moveSpeed = anim.moveSpeed;
			this->limbs = anim.limbs;
		};
		
		void setGender(std::string _gender)
		{
			this->gender  = _gender;
		}
		std::string getGender()
		{
			return this->gender;
		}
		
		int Speed(int num)
		{
			int speed = num * this->moveSpeed;
			return speed;
		}
		
		void Sleep(int hours)
		{
			std::cout<<"You sleep for: "<<hours<<" hours!"<<std::endl;
			std::cout<<"You are ready!"<<std::endl;
		}
		
		Animal operator-(const Animal &ani)
		{
			Animal general;
			general.moveSpeed = this->limbs / ani.moveSpeed;
			return general; 
		}
		
		~Animal()
		{
			std::cout<<"Daughter - destructor"<<std::endl;
		};
		
};

class Mammal : public Animal
{
	private:
		int chldren;
	public:
		std::string habitat;
		std::string spicies;
		
		Mammal()
		{
			this->chldren = 0;
			this->habitat = "meadow";
			this->spicies = "overland";
			
			std::cout<<"Grand daughter - constructor"<<std::endl;
		};
		Mammal(int _children, std::string _habitat, std::string _spicies)
		{
			this->chldren = _children;
			this->habitat = _habitat;
			this->spicies = _spicies;
		};
		Mammal(const Mammal &mm)
		{
			this->chldren = mm.chldren;
			this->habitat = mm.habitat;
			this->spicies = mm.spicies;
		};
		
		void setChildren(int _children)
		{
			this->chldren = _children;
		}
		int getChildren()
		{
			return this->chldren;
		}
		
		void Such()
		{
			std::cout<<"SUCK"<<std::endl;
		}
		
		int MakeChild()
		{
			this->chldren++;
			return this->chldren;
		}
		
		Mammal operator*(const Mammal &mm)
		{
			Mammal mam;
			mam.chldren = this->chldren + mm.chldren;
			return mam;
		}
		
		~Mammal()
		{
			std::cout<<"Grand daughter - destructor"<<std::endl;
		};

};

class Mouse : public Mammal
{
	private:
		int smell_level;
		
		int inLOveCount;
	public:
		std::string canalName;
		bool inLove;
		
		Mouse()
		{
		};
		Mouse(int _smellLv, std::string _canalName, bool _inLove)
		{
			this->smell_level = _smellLv;
			this->canalName = _canalName;
			this->inLove = _inLove;
			
			this->inLOveCount = 0;
		};
		Mouse(const Mouse &ms)
		{
			this->smell_level = ms.smell_level;
			this->canalName = ms.canalName;
			this->inLove = ms.inLove;
			
			this->inLOveCount = 0; 
		};
		
		void setSmellLv(int smlv)
		{
			this->smell_level = smlv;
		}
		int getSmellLv()
		{
			return this->smell_level;
		}
		
		void inLover()
		{
			if(inLove == false)
			{
				this->inLove = true;
				this->inLOveCount++;
				if(this->inLOveCount%4 == 0)
				{
					MakeChild();
				}
			}
		}
		
		void outLover()
		{
			this->inLove = false;
		}
		
		Mouse operator/(const Mouse &ms)
		{
			Mouse mouse;
			mouse.smell_level = (this->smell_level / 2 ) * ms.smell_level;
			return mouse;
		}
		
		~Mouse()
		{
		};
	
};

int main()
{
	Mouse mice(4,"Sofia's canal",true);
	mice.Such();
	
	//	contrl + dot button
	return 0;
}


/*
#include <stdio.h>
#include <iostream>
using namespace std;

class Mother{
    public:
        Mother(){
            cout<<"Mother class"<<endl;
        };
        void sayHi(){
            cout<<"Hi"<<endl;
        }
        ~Mother(){
             cout<<"Mother class end"<<endl;
        };
};

class Father{
    public:
        Father(){
            cout<<"Father class"<<endl;
        };
        void sayOhayo(){
            cout<<"Ohayo"<<endl;
        }
        ~Father(){
             cout<<"Father class end"<<endl;
        };
};

class Daughter : public Mother, public Father{
    private:
        int age = 20;
    
    protected:
        int weight = 53;
  public:
    Daughter(){
        cout<<"Daughter class end"<<endl;
    };
    void sayBye(){
        cout<<"Bye"<<endl;
    }
    ~Daughter(){};
};

class GrandDaughter : private Daughter{
    //private:
    //sayBye(); 
  public:
    GrandDaughter(){
        cout<<"GrandDaughter class end"<<endl;
    };
    void burp(){
        cout<<"Burp"<<endl; 
    }
    ~GrandDaughter(){};
};
//protected
int main()
{   
	Daughter Berta;
    GrandDaughter Gertrude;
    Gertrude.sayBye();
    Berta.sayBye();

    return 0;
}
*/

//------------------------------------------------------------------------//

/*
#include <stdio.h>
#include <iostream>
using namespace std;

class Mother{
    private:
        string maidenName;
    public:
        string hairColor;
        int weight;
        
        Mother(){
            this->maidenName = "Heidi";
            this->hairColor = "Blonde";
            this->weight = 53;
            cout<<"mm"<<endl;
        }
        Mother(int weight){
            this->weight = weight;
        }
        
        void sing(){
            cout<<"Sing like a bird"<<endl;
        }
        
        ~Mother(){
            cout<<"Mother end"<<endl;
        }
};

class Father{
    private:
        int longevity;
    public:
        string eyeColor;
        int height;
        
        Father(){
            this->longevity = 111;
            this->eyeColor = "Blue";
            this->height = 183;
            cout<<"ff"<<endl;
        }
        Father(int height){
            this->height = height;
        }
        
        void drink(){
            cout<<"Drink like a pirate"<<endl;
        }
        
        ~Father(){
            cout<<"Father end"<<endl;
        }
};

class Daughter: public Mother,public Father{
    public:
        Daughter(){
            
        }
        void programmingGuru(){
            cout<<"Programming"<<endl;
        }
};

int main()
{   
	Daughter d1;
    cout<<d1.eyeColor<<endl;

    return 0;
}
*/

