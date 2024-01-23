#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{

    srand(time(NULL));
    int table[3][5];
    int result[5];
    int horisontSum[3];
    int sum=0;
    int suma=0;

    for(int i=0; i<3; i++)
	{
        for(int j=0; j<5; j++)
		{
            table[i][j] = rand()%10;
            cout << table[i][j] << '\t';
    		suma+=table[i][j];
        }
        horisontSum[i] = suma;
		cout<<"|";
		cout<<horisontSum[i]<<endl;
		suma = 0;
        
    }
    cout << "result of sums:"<< endl;
    for(int j=0; j<5; j++)
	{
        for(int i=0; i<3; i++)
		{
            sum+=table[i][j];
        }
        result[j] = sum;
        cout << result[j] << '\t';
        sum=0;
    }
    cout << endl;

    cout<<"---------------------------"<<endl;
    
    int resh[3][5];
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		resh[i][j] = rand()%10;
    		cout<<resh[i][j]<< '\t';
    		suma+=resh[i][j];
		}
		horisontSum[i] = suma;
		cout<<"|";
		cout<<horisontSum[i]<<endl;
		suma = 0;
	}
    
    cout<<"---------------------------"<<endl;
	
	//cout<<rand()<<endl;
	int tmp;
	int const szOfLenght=10;
	int randarr[szOfLenght] ;
	for(int i = 0; i<szOfLenght;i++)
	{
		randarr[i] = rand()%21 - 10;
		cout<<randarr[i]<<endl;
	}
	for(int i = 0;i<szOfLenght;i++)
	{
		tmp = rand()%11;
		if(rand()%2)
		{
			tmp*=-1;
		}
		randarr[i] = tmp;
	}
	for(int i=0; i<szOfLenght; i++)
	{
        cout <<randarr[i]<<'\t';
    }
    
    int rando;
    int i;
    while(i < 100)
    {
    	rando = rand();
    	cout<<(char)rando<<endl;
    	i++;
	}
    
    
}
