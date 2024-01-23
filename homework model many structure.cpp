#include <iostream>
using namespace std;

void PrintFig(int rows,char option);

int main()
{
	int row;
	char opt;
	cout<<"How rows you want: ";cin>>row;
	cout<<"What option: ";cin>>opt;
	
	PrintFig(row,opt);
}

void PrintFig(int rows,char option)
{
	switch(option)
	{
		case 'a':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i <= j)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'b':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i >= j)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'c':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i <= j && j <= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'd':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i >= j && j >= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'e':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i >= j && j >= rows-i-1 || i <= j && j <= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'f':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i >= j && j <= rows-i-1 || i <= j && j >= rows-i-1) 
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'g':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i >= j && j <= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'h':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(i <= j && j >= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'i':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(j <= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		case 'j':
			for(int i = 0; i<rows; i++)
			{
				for(int j = 0; j<rows; j++)
				{
					if(j >= rows-i-1)
						cout<<"*";
					else if(i == 0 || j == 0 || i == rows-1 || j == rows-1)
						cout<<"^";
					else
						cout<<" ";
				}
				cout<<endl;
			}
			break;
		default:
			cout<<"No valid option!"<<endl;
			break;		
	}	
}

