#include<iostream>
using namespace std;

void PrintNum(int start, int end);
int nFact(int n);

int main()
{
	PrintNum(12,32);
	cout<<nFact(7)<<endl;
}

void PrintNum(int start, int end)
{
	if(start > end)
	{
		cout<<"END"<<endl;
		return;
	}
	else
	{
	cout<<start<<endl;
	PrintNum(start+1 ,end);
	}
	
}

int nFact(int n)
{
	if(n<1)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n * nFact(n-1);
	}
}

/*
n=5 
5! = 1*2*3*4*5

5! = 5 * 4!

4! = 4 * 3!

3! = 3 * 2!

2! = 2 * 1!

f(5)

retrun 5 * f(4)
5 * (4 * f(3))
20 * (3 * f(2))
60 * (2 * f(1) )
120 * f(1) - > prikliuchva rekursiqta


*/

