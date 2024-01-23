#include <iostream>

class Gang
{
	private:
		int health;
	public:
		int tren = 5;
		std::string rang;
		std::string mafiotNickname;
		
		Gang()
		{
			std::cout<<"Give me the momey!"<<std::endl;
		};
		Gang(std::string nickname)
		{
			this->health = 100;
			this->rang = "mafia member";
			this->mafiotNickname = nickname;
		};
		Gang(const Gang &mafOb)
		{
			this->health = mafOb.health;
			this->rang = mafOb.rang;
			this->mafiotNickname = mafOb.mafiotNickname;
		};
		
		Gang operator+(const Gang &obj)//what does it mean the opårator
		{
			Gang res;
			res.health = this->health * obj.health;
			return res;
		}
		Gang operator/(Gang &obj)
		{
			Gang res;
			res.tren = this->tren - obj.tren;
			return res;
		}
		
		
		void setHealth(int _health)
		{
			this->health = _health;
		}
		int getHealth()
		{
			return health;
		}
		
};

int main()
{
	Gang DichoPeralnqta;
	
	Gang Pers("Sali");
	Pers.setHealth(34);
	
	Gang AleksRazbivachaNaSartsA("Tulbuhin");
	AleksRazbivachaNaSartsA.tren = 56;
	
	Gang IvoKashona(AleksRazbivachaNaSartsA);
	IvoKashona.setHealth(98);
	std::cout<<IvoKashona.getHealth()<<std::endl;
	
	Gang Pedro = Pers + IvoKashona + AleksRazbivachaNaSartsA;
	std::cout<<Pedro.getHealth()<<std::endl;
	
	Gang del = AleksRazbivachaNaSartsA / IvoKashona; 
	std::cout<<del.tren<<std::endl;
	
}

