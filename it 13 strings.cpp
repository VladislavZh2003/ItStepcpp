#include<iostream>
#include<string.h>
#include<cstdio>
#include <string>
using namespace std;



int main()
{
	char stOne[100];
	char a;
	a = getwchar();
	putchar(a);
	cout<<endl;
	
	cout<<"---------------------------"<<endl;
	
	char strOb[100] = "Cat";
	char strOb2[100];
	strcpy(strOb2, strcat(strOb, " is afraid of dogs."));//можем и без да го присвояваме на друга променлива.
	puts(strOb2);

	cout<<"---------------------------"<<endl;

	string stringF;
	int startF;
	int endF;
	
	cin>>stringF;
	
	cout<<"Input start:"<<endl;
	cin>>startF;
	
	cout<<"Input end:"<<endl;
	cin>>endF;

	string str2 = stringF.substr(startF, endF-1);
	cout<<str2<<endl;


	
	
	cout<<"---------------------------"<<endl;
	
	char mn[100];
	int start;
	int end;
	cin>>mn;
	cout<<"Input start:"<<endl;cin>>start;
	cout<<"Input end:"<<endl;cin>>end;
	
	int lenMN = strlen(mn);
	
	if(start > -1 && end > -1 && start <= end && end <= lenMN)
	{
		for(int i = start; i <= end; i++)
		{
			cout<<mn[i]<<"";
		}
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	
	char st[100] = "Cat";
	int len = strlen(st);
	puts(st);
	cout<<len<<endl;
	cout<<101-len<<endl;
	printf("len = %d \n", len);
	printf("len of zero = %d \n", 101 - len);
}
