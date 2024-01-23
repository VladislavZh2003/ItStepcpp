#include<iostream>
using namespace std;
int main()
{
	int result = 0;
	char mlp = '+';
	const int szOfArray = 9;
	int posAr[szOfArray] = {1,5,-9,123,-54,43,-6,-8,3};
	for(int i = 0;i<=szOfArray;i++)
	{
		if(posAr[i]>0)
		{
			cout<<posAr[i];
			result+=posAr[i];
			cout<<mlp;
		}
	}
	cout<<"= "<<result<<endl;
	
	cout<<"________________________________________"<<endl;
	
	float fracArr[4] = {12.3, 45.5, -12.61, 3.678};
	int frArr[4] = {12.3, 45.5, -12.61, 3.678};
	for(int i = 0;i<4;i++)
	{
		if(fracArr[i]+0.5>=frArr[i]+1)
		{
			cout<<frArr[i]+1<<endl;
		}
		else
		{
			cout<<frArr[i]<<endl;
		}
	}
}
