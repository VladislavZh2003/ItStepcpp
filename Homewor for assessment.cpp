#include<iostream>
using namespace std;

void ColektionDigit(int digit)
{
	int sum = 0;
	int result = 1;
	
	for(int i = 1;i <= digit;i *= 10)
	{
		sum++;
	}
	
	for(int j = 1, db=0;db < sum;j*=10, db++)
	{
		if((digit%(j*10))/j != 0)
		{
		cout<<(digit%(j*10))/j<<"*";
		result *= (digit%(j*10))/j;
		}
	}
	
	cout<<" ="<<result<<endl;
}

double TwoFraction(double fragNumber)
{
	int notFrag = fragNumber*1000;
	int notFrag01;
	double fixFrag;
	
	if(notFrag%10 >= 5)
	{
		notFrag += 10;
	}
	
	notFrag01 = notFrag/10;
	fixFrag = notFrag01;
	
	return fixFrag/100;
}

int main()
{
	double fn;
	double resFr;
	cout<<"Input fragtion number: ";cin>>fn;
	resFr = TwoFraction(fn);
	cout<<resFr<<endl;
	
	int cd;
	cout<<"Input any number between 1 and 9999: ";cin>>cd;
	
	if(cd >= 1 && cd <= 9999)
	ColektionDigit(cd);
}
