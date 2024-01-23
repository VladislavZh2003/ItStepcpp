#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	
	int const szOfArray=3; 
	int seaChess [szOfArray][szOfArray];
	int sum1=0;
	int resA=1;
	
	for(int i=0;i<szOfArray;i++)
	{
		
		for(int j=0;j<szOfArray;j++)
		{
			
			seaChess [i][j]= rand();
			if(seaChess [i][j]%2==0)
			{
				cout<<'x'<<'\t';
				sum1+=resA;
			}
			else
			{
				cout<<'o'<<'\t';
				sum1+=2*resA;
			}
			resA*=10;
		}
		cout<<endl;
	}
	
	for(int xo=1,ba=0;xo<=szOfArray*szOfArray*xo&&ba<szOfArray*szOfArray;xo*=10,ba++)
	{
		if((sum1%(xo*10)-sum1%xo)/xo==1)
		{
			cout<<"x move!"<<endl;			
		}
		else
		{
			cout<<"o move!"<<endl;
		}
	}
	
}
