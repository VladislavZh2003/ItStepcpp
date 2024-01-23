#include <iostream>
#include <string.h>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	/*int start,end;
	string forRemove;
	getline(cin,forRemove);
	
	cout<<"Input start: ";cin>>start;
	cout<<"Input end: ";cin>>end;
	
	forRemove.erase(start-1,end-start+1);
	
	printf("%s\n",forRemove.c_str());
	
	cout<<"---------------------------"<<endl;	
	
	string seachStr;
	cout<<"Input a sentence: ";
	getline(cin,seachStr);
	
	int len = seachStr.size();
	
	char input;
	cout<<"Input a letter: ";cin>>input;
	size_t pos;
	do
	{
	int i;
	
	pos = seachStr.find(input);
	
	if(pos>len)
	break;
	
	cout << "Position: " << pos+i+1 << endl;
	
	seachStr.erase(pos,1);
	i++;
	
	}while(true);*/
	
	cout<<"---------------------------"<<endl;

    string revStr;
    char input;
    size_t pos;
    int len;
    
	getline(cin,revStr);
	cout<<"Input letter: ";cin>>input;
	
	len = revStr.size();
    reverse(revStr.begin(), revStr.end());
	pos = revStr.find(input);
	cout << "Position: " << len-pos << endl;

}
