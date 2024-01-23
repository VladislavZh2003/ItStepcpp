#include <iostream>
using namespace std;

int main()
{
	try
	{
		int motherAge = 29;
		int sonAge = 36;
		
		if(sonAge > motherAge)
		{
			throw 66;
		}
	}
	catch(int x)
	{
		cout<<"Error: "<<x<<endl;
	}
	
	return 0;
}

