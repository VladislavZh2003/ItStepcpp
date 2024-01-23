#include <iostream>
using namespace std;
int main()
{
	int ArrayN[] = {12,34,56,5,2,789,1,4,8,90};
	for(int i=9;i<10;i--)
	{
		if(ArrayN[i]==0)
		!cout<<ArrayN[i];
		else if(ArrayN[i]%3==0)
		{
			cout<<ArrayN[i]<<endl;
			break;
		}
		
	}
	
	cout<<"_____________________________________________"<<endl;
	int ArN[] = {12,34,56,5,2,789,1,4,8,90};
	int n;
	cout<<"n= ";cin>>n;
	if(n<11 && n>0)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"Number"<<i+1<<" "<<ArN[i]<<endl;
		}
	}
	else
	cout<<"Please input a number smaller than 11"<<endl;
	
	cout<<"_____________________________________________"<<endl;
	int age[3];
	age[0] = 12;
	age[2] = 33;
	age[3] = 54;
	
	int a[] = {13,45,764,7,98};
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	
	int const szOfArray = 10;
	int b[szOfArray] = {13,45,764,7,98};
	
	for(int i=0;i<szOfArray;i++)
	{
		cout<<b[i]<<endl;
	}
}
