#include <iostream>
using namespace std;
int main()
{
	int start, end;
	
	
	do{
		int res = 2;
		cout<<"start = ";cin>>start;
		cout<<"end = ";cin>>end;
		if(start<end)
		{
			int n;
			cout<<"n = ";cin>>n;
			for(int c = 1; c < n; c++)
			{
				res *= 2;
			}
			cout<<res;
			if(res>start && res<end)
			{	
				cout<<" => "<<"true"<<endl;
			}
			else
			cout<<" => "<<"false"<<endl;
			n=0;
		}
		else
		{
			break;
		}
		
		res = 0;
	}while(true);

	cout<<"ERROR"<<endl;
	
	cout<<"_________________________________________________"<<endl;
	int number;
	
	while(1)
	{
		cout<<"Input an odd number"<<endl;
	    cin>>number;
	    if(number%2 == 0)
	    {
	    	break;
		}
		for (int i=0; i<number;i++)
		{
			for(int j=0;j<number; j++)
			{
				if(i==j || j==number-i-1)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
}
