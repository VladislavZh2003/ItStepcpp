#include <iostream>
using namespace std;
int main()
{
	cout<<"Task 1"<<endl;
	int an;
	cout<<"Input a number: ";cin>>an;
	if (an<0)
	{
		cout<<"|"<<an+an*(-2)<<"|"<<endl;
	}
	else
	cout<<"|"<<an<<"|"<<endl;
	
	cout<<"Task 2"<<endl;
	double bn;
	int bc;
	cout<<"Input a fractional number: ";cin>>bn;
	bc=bn;
	cout<<(bn-bc)<<endl;
	
	cout<<"Task 3"<<endl;
	double cn;
	int cc;
	cout<<"Input a fractional number: ";cin>>cn;
	cc=cn;
	cout<<cc<<endl;
	
	cout<<"Task 4"<<endl;
	char db;
	cout<<"Input lowercase or uppercase: ";cin>>db;
	if(db=='a'||db=='b'||db=='c'||db=='d'||db=='e'||db=='f'||db=='g'||db=='h'||
	db=='i'||db=='j'||db=='k'||db=='l'||db=='m'||db=='n'||db=='o'||db=='p'||db=='q'||
	db=='r'||db=='s'||db=='t'||db=='u'||db=='v'||db=='w'||db=='x'||db=='y'||db=='z')
	{
		cout<<"The letter is small"<<endl;
	}
	else
	{
		cout<<"The letter is big"<<endl;
	}

	cout<<"Task 5"<<endl;
	char eb;
	cout<<"Input lowercase or uppercase: ";cin>>eb;
	switch(eb)
	{
	
	case 'a':
		cout<<"The letter is 1 in alphabet!"<<endl;
		break;
	case 'b':
		cout<<"The letter is 2 in alphabet!"<<endl;
		break;
	case 'c':
		cout<<"The letter is 3 in alphabet!"<<endl;
		break;
	case 'd':
		cout<<"The letter is 4 in alphabet!"<<endl;
		break;
	case 'e':
		cout<<"The letter is 5 in alphabet!"<<endl;
		break;
	case 'f':
		cout<<"The letter is 6 in alphabet!"<<endl;
		break;
	case 'g':
		cout<<"The letter is 7 in alphabet!"<<endl;
		break;
	case 'h':
		cout<<"The letter is 8 in alphabet!"<<endl;
		break;
	case 'i':
		cout<<"The letter is 9 in alphabet!"<<endl;
		break;
	case 'j':
		cout<<"The letter is 10 in alphabet!"<<endl;
		break;
	case 'k':
		cout<<"The letter is 11 in alphabet!"<<endl;
		break;
	case 'l':
		cout<<"The letter is 12 in alphabet!"<<endl;
		break;
	case 'm':
		cout<<"The letter is 13 in alphabet!"<<endl;
		break;
	case 'n':
		cout<<"The letter is 14 in alphabet!"<<endl;
		break;
	case 'o':
		cout<<"The letter is 15 in alphabet!"<<endl;
		break;
	case 'p':
		cout<<"The letter is 16 in alphabet!"<<endl;
		break;
	case 'q':
		cout<<"The letter is 17 in alphabet!"<<endl;
		break;
	case 'r':
		cout<<"The letter is 18 in alphabet!"<<endl;
		break;
	case 's':
		cout<<"The letter is 19 in alphabet!"<<endl;
		break;
	case 't':
		cout<<"The letter is 20 in alphabet!"<<endl;
		break;
	case 'u':
		cout<<"The letter is 21 in alphabet!"<<endl;
		break;
	case 'v':
		cout<<"The letter is 22 in alphabet!"<<endl;
		break;
	case 'w':
		cout<<"The letter is 23 in alphabet!"<<endl;
		break;
	case 'x':
		cout<<"The letter is 24 in alphabet!"<<endl;
		break;
	case 'y':
		cout<<"The letter is 25 in alphabet!"<<endl;
		break;
	case 'z':
		cout<<"The letter is 26 in alphabet!"<<endl;
		break;
	default:
		break;
	}
	if(eb=='A')
	cout<<"The letter is 1 in alphabet!"<<endl;
	else if(eb=='B')
	cout<<"The letter is 2 in alphabet!"<<endl;
	else if(eb=='C')
	cout<<"The letter is 3 in alphabet!"<<endl;
	else if(eb=='D')
	cout<<"The letter is 4 in alphabet!"<<endl;
	else if(eb=='E')
	cout<<"The letter is 5 in alphabet!"<<endl;
	else if(eb=='F')
	cout<<"The letter is 6 in alphabet!"<<endl;
	else if(eb=='G')
	cout<<"The letter is 7 in alphabet!"<<endl;
	else if(eb=='H')
	cout<<"The letter is 8 in alphabet!"<<endl;
	else if(eb=='I')
	cout<<"The letter is 9 in alphabet!"<<endl;
	else if(eb=='J')
	cout<<"The letter is 10 in alphabet!"<<endl;
	else if(eb=='K')
	cout<<"The letter is 11 in alphabet!"<<endl;
	else if(eb=='L')
	cout<<"The letter is 12 in alphabet!"<<endl;
	else if(eb=='M')
	cout<<"The letter is 13 in alphabet!"<<endl;
	else if(eb=='N')
	cout<<"The letter is 14 in alphabet!"<<endl;
	else if(eb=='O')
	cout<<"The letter is 15 in alphabet!"<<endl;
	else if(eb=='P')
	cout<<"The letter is 16 in alphabet!"<<endl;
	else if(eb=='Q')
	cout<<"The letter is 17 in alphabet!"<<endl;
	else if(eb=='R')
	cout<<"The letter is 18 in alphabet!"<<endl;
	else if(eb=='S')
	cout<<"The letter is 19 in alphabet!"<<endl;
	else if(eb=='T')
	cout<<"The letter is 20 in alphabet!"<<endl;
	else if(eb=='U')
	cout<<"The letter is 21 in alphabet!"<<endl;
	else if(eb=='V')
	cout<<"The letter is 22 in alphabet!"<<endl;
	else if(eb=='W')
	cout<<"The letter is 23 in alphabet!"<<endl;
	else if(eb=='X')
	cout<<"The letter is 24 in alphabet!"<<endl;
	else if(eb=='Y')
	cout<<"The letter is 25 in alphabet!"<<endl;
	else if (eb=='Z')
	cout<<"The letter is 26 in alphabet!"<<endl;
	
	cout<<"Task 6"<<endl;
	double fn;
	int fa,fb,fk=0;
	cout<<"Input a number: ";cin>>fn;
	fa=fn;
	for(int i=1;i/10<=fn;i*=10)
	{
		fb=(fn/i-fa/i)*10;
		if(fb==0)
		!cout<<fb;
		else if(fb%2==0 )
		{
		cout<<fb;
		cout<<" + ";
		fk+=fb;
		}
		
	}
	cout<<"= "<<fk<<endl;
	
	cout<<"Task 7"<<endl;
	double gn;
	int ga,gb,gk=1;
	cout<<"Input a number: ";cin>>gn;
	ga=gn;
	for(int i=1;i/10<=gn;i*=10)
	{
		gb=(gn/i-ga/i)*10;
		if(gb%2!=0)
		{
			cout<<gb;
			cout<<" * ";
			gk*=gb;
		}
	}
	cout<<"= "<<gk<<endl;
	
	cout<<"Task 8"<<endl;
	int hn;
	cout<<"Do you want to see multiplication tsble with any figure? Which by 1 to 10: "<<endl;
	cin>>hn;
	if(hn>0 && hn<11)
	{
		for(int i=1;i<11;i++)
		{
			cout<<i<<" * "<<hn<<" = "<<hn*i<<endl;
		}
	}
	else
	{
		cout<<"This number is out of allowable range, between 1 and 10!"<<endl;
	}
	cout<<"Task 9"<<endl;
	int ia,ib,ic;
	cout<<"Input numbre for 'a'";cin>>ia;
	cout<<"Input numbre for 'b'";cin>>ib;
	ic=ia;
	ia=ib;
	ib=ic;
	cout<<"a: "<<ia<<endl;
	cout<<"b: "<<ib<<endl;
	
	cout<<"Task 10"<<endl;
	int jstart;
	int jend;
	int jr;
	jr=0;
	cout<<"Input two-digit start number: ";cin>>jstart;
	cout<<"Input two-digit end number: ";cin>>jend;
	for(double i=jstart;i<=jend;i++)
	{
		int x =i;
		cout<<x/10<<" + ";
		cout<<(i/10-x/10)*10<<" + ";
		jr+=(i/10-x/10)*10+x/10;
	}
	cout<<"= "<<jr<<endl;
}
