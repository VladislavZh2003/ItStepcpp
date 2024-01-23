#include <iostream>
using namespace std;
int main()
{
	
	
	cout<<"_________________________________________________"<<endl;
	int n;
	cout<<"Enter number for rows:"; cin>>n;
	for(int vv=0; vv<n;vv++)
	{
		for(int xx=vv;xx<n-1;xx++)
		{
			cout<<" ";
		}
		for(int xx=0;xx<vv+1;xx++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
	
	cout<<"_________________________________________________"<<endl;
	
	int col_max, row_max;
	cout<<"Enter number of rows:"; cin>> row_max;
	cout<<"Enter number of cols:"; cin>> col_max;
	
	for(int row=0; row<row_max; row++)
	{
		for(int col=0; col<col_max; col++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	
		cout<<"_________________________________________________"<<endl;

	for(int i = 1;i<=3; i++)
	{
		for( int x =1; x<=4; x++)
		{
			if(i ==2 && x==3 ||i ==2 && x==2 ||i ==2 && x==4)
			{
				cout<< " ";
			}
			else
			cout<<"*";
			
		}
		cout<< "*"<<endl;

	}
	
	cout<<"_________________________________________________"<<endl;
	
	for(int i = 1; i<=3; i++)
	{
		for(int x=1; x<=4; x++)
		{
			cout<<" i="<<i<<" x="<<x;
		}
		cout<<endl;
	}
	
	cout<<"_________________________________________________"<<endl;
	
	int nfak, result = 1;
	cout<< "n= " ;
	cin>>nfak;
	for(int npo=1;nfak>=npo;npo++)
	{
		result *= npo;
		cout<< npo << "!= "<<result<<endl;
	}
	
	cout<<"_________________________________________________"<<endl;
	cout << "FOR" <<endl;
	for(int i = 0; i <= 10; i++)
	{
		cout<< i <<endl;
	}
	cout<< "WHILE" <<endl;
	int i = 0;
	while(i<=10)
	{
		cout<< i <<endl;
		i++;
	}
}
