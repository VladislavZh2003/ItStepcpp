#include <iostream>
#include <stdlib.h>
#include <time.h>

// constructor, destructor, operator overloading, friend - don't inheritance

class Minecraft_world
{
	private:
		int open_chuncks;
	public:
		std::string name;
		int players;
		
		Minecraft_world()
		{
			this->open_chuncks = 1;
			this->name = "My world";
			this->players = 1;
		};
		Minecraft_world(std::string _name, int _players)
		{
			this->open_chuncks = 1;
			this->name = _name;
			this->players = _players;
		};
		Minecraft_world(const Minecraft_world &mw)
		{
			this->open_chuncks = mw.open_chuncks;
			this->name = mw.name;
			this->players = mw.players;
		};
		
		void setOpen_chuncks(int num_chunck)
		{
			this->open_chuncks = num_chunck;
		}
		int getOpen_chuncks()
		{
			return this->open_chuncks;
		}
		
		void Set_time(bool DN)
		{
			if (DN)
			{
				std::cout<<"You set Day!"<<std::endl;
			}
			else
			{
				std::cout<<"You set Night!"<<std::endl;
			}
		}
		
		int Set_spawn_point(int sp)
		{
			return sp / this->open_chuncks;
		}
		
		Minecraft_world operator>>(const Minecraft_world &mw)
		{
			Minecraft_world mkwd;
			mkwd.open_chuncks = this->open_chuncks + mw.open_chuncks;
			return mkwd;
		}
		Minecraft_world operator<<(const Minecraft_world &mw)
		{
			Minecraft_world mkwd;
			mkwd.open_chuncks = this->open_chuncks - mw.open_chuncks;
			return mkwd;
		}
		
		~Minecraft_world()
		{
		};
	
};

class Structure : public Minecraft_world
{
	private:
		int x;
		int y;
	public:
		std::string stName;
		int height;
		int weight;

		
		Structure()
		{
			srand(time(NULL));
			
			this->x = rand();
			this->y = rand();
			this->height = 10;
			this->weight = 10;
			this->stName = "NOname";
		};
		Structure(std::string _name)
		{
			this->name = _name;
		};
		Structure(const Structure &st)
		{
			this->x = st.x;
			this->y = st.y;
			this->height = st.height;
			this->weight = st.weight;
			this->name = st.name;
		};
		
		void setX(int _x)
		{
			this->x = _x;
		}
		int getX()
		{
			return this->x;
		}
		
		void setY(int _y)
		{
			this->y = _y;
		}
		int getY()
		{
			return this->y;
		}
		
		int GiveH()
		{
			return this->height;
		}
		
		int GiveW()
		{
			return this->weight;
		}
		
		void setName(std::string nm)
		{
			this->stName = nm;
		}
		
		Structure operator*(const Structure &st)
		{
			Structure struc;
			struc.height = this->height + st.height;
			return struc;
		}
		Structure operator/(const Structure &st)
		{
			Structure struc;
			struc.weight = this->weight + st.weight;
			return struc;
		}
		
		~Structure()
		{
		};
	
};

class Block : public Structure
{
	private:
		bool dense;
	public:
		std::string material;
		bool open;
		
		Block()
		{
		};
		Block(bool _open, std::string _mat, bool _dense)
		{
			this->open = _open;
			this->material = _mat;
			this->dense = _dense;
		};
		Block(const Block &b)
		{
			this->open = b.open;
			this->material = b.material;
			this->dense = b.dense;
		};
		
		void setDense(bool TF)
		{
			this->dense = TF;
		}
		int getDense()
		{
			return this->dense;
		}
		
		void Open_block()
		{
			if(this->open)
			{
				std::cout<<"open"<<std::endl;
			}
		}
		
		void Fall()//polymorphism
		{
			std::cout<<"block fall in "<<this->stName<<std::endl;
		}
		
		Block operator+(const Block &bb)
		{
			Block blk;
			blk.weight = this->weight + bb.height;
			return blk;
		}
		Block operator-(const Block &bb)
		{
			Block blk;
			blk.weight = this->height + bb.weight;
			return blk;
		}
		
		~Block()
		{
		};
		
};

class Half_Block : public Structure
{
	public:
		Half_Block()
		{
		};
		
		void Fall()//polymorphism
		{
			std::cout<<"half block fall in "<<this->stName<<std::endl;
		}
};

int main()
{
	//polymorphism
	Block bb;
	Half_Block hb;
	
	bb.Fall();
	hb.Fall();
	
	Structure *sb = &bb;
	Structure *sh = &hb;
	
	std::cout<<sh->getY()<<std::endl;
	
	sh->setName("Heheh");
	hb.Fall();
	bb.Fall();
	
	return 0;
}

