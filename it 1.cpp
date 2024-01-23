#include <iostream>
using namespace std;
 int main()
 	{
 		int a;
 		cout<< "input a =" ;
 		cin>>a;
 		int b;
 		cout<< "input b =";
 		cin>>b;
 		cout << (a + b) / 2 << endl;
 		cout << (a + b) % 2 << endl;
 		
 		cout<< "___________________________" << endl;
 		
 		int as;
 		cout << "Prefix increment "<< endl;
 		as=9;
 		cout << ++as << endl;
 		cout<< as << endl;
 		cout <<"Postfix increment " << endl;
 		as= 9;
 		cout << as++ << endl;
 		cout << as << endl;
 		
 		cout<< "___________________________" << endl;
 		
 		int d = 14;
 		cout<< d << endl;
 		d = d + 6;
 		cout<< d << endl;
 		d += 6;
 		cout<< d << endl;
 		d *= 2;
		cout<< d << endl;
		
		cout<< "___________________________" << endl;
		
		int a2;
		int b2;
		cout<< "input a =" ;
 		cin>>a2;
 		cout<< "input b =";
 		cin>>b2;
		cout<< (double) ( a2 + b2)/2 << endl;
		
		cout<< "___________________________" << endl;
		
		char letter = 'A';
		cout << letter << endl;
		cout << (int) letter << endl;

		cout << (char) 74 << endl;
		cout << (int) letter << endl;
			
		cout<< "___________________________" << endl;
		
		bool desk;
		cout << desk << endl;
		desk = 3;
		cout << desk << endl;
		
		cout<< "___________________________" << endl;
		
		short a3;
		short b3;
		cout << "a3 = " << endl;
		cin>>a3;
		cout << "b3= " << endl;
		cin>>b3;
		if (a3 >= b3 )
		{
			cout<< "yes"<< endl;
		} 
		else
		{
			cout<< "no" << endl;
		}
				
		cout<< "___________________________" << endl;
		
		short a4 = 3;
		short b4 = 7;
		bool rest = !( a4 == b4);
		cout << rest << endl;
 	}
 
