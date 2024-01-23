#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	
	int const szOfArray=3; 
	int seaChess [szOfArray][szOfArray];
	seaChess [szOfArray][szOfArray]= rand();
	for(int i=0;i<szOfArray;i++)
	{
		for(int j=0;j<szOfArray;j++)
		{
			
			if(seaChess [i][j]%2==0)
			{
				cout<<'x'<<'\t';
			}
			else
			{
				cout<<'o'<<'\t';
			}
			
		}
		cout<<endl;
	}
	for(int i=0;i<szOfArray;i++)
	{
		for(int j=0;j<szOfArray;j++)
		{
			
			if(seaChess [i][j]%2==0)
			{
				cout<<"x move!"<<endl;
			}
			else
			{
				cout<<"o move!"<<endl;
			}
			
		}
	}
}
