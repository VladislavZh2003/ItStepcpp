#include <iostream>
using namespace std;
int main()
	{
		int multipllication;
		int multiOn = 1;
		cin>>multipllication;
		if(multipllication > 0 && multipllication < 11)
		{
			while( multiOn < 11)
			{
				cout<< multiOn << " * " << multipllication << " = " << multiOn * multipllication <<endl;
				multiOn++;
			}
		}
		else
		cout << "ERROR"<< endl;
		
		
		cout<< "__________________________________-" << endl;
		
		int notDow;
		
		while(9>10)
		{
			cout<< "We are in while" << endl;
		}
		
		int dow = 9;
		 do
		 {
		 	cout<< "We are in do-while" << endl;
		 }while(9>10);
		
		
	cout<< "__________________________________-" << endl;
		int start;
		int end;
		cin>>start;
		cin>>end;
		/*
		start += 5 - (start %5);
		
		while(start < end)
		{
			cout<< start<<endl;
			start+=5;
		}
		*/
 	while(start <= end)
		{
			if(start % 5 ==0)
			{
				cout<< start<<endl;
				
			}
			start++;
		}
		cout << "End" << endl;
		
		cout<< "__________________________________-" << endl;
		int first;
		int second;
		cin>>first;
		cin>>second;
		while(first <= second)
		{
			cout << first <<endl;
			first = first + 3;
			//or: first +=3
		}
		cout << "End" << endl;
		
		cout<< "__________________________________-" << endl;
		int cik;
		cin>>cik;
		
		while(cik<55)
		{
			cout << cik << endl;
			cik++;
		}
		cout << "Izleze" <<endl;
	
		
		
		/*while(cik)
		{
			cout<< cik << endl;
					
		}*/	
		cout<< "__________________________________-" << endl;
		//int vapros = 4;
		//vapros < 4 ? true : false
		
	}
