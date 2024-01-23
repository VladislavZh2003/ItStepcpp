#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
template <class T>void selectSort(T a[], long size);

int main()
{
	srand(time(NULL));
	const long SIZE=10;
	int ar[SIZE];
	for(int i=0;i<SIZE;i++)
	{
		ar[i]=rand()%100;
		cout<<ar[i]<<"\t";
	}
	cout<<"\n\n";
	selectSort(ar,SIZE);
	for(int i=0;i<SIZE;i++)
	{
		cout<<ar[i]<<"\t";
	}
	cout<<"\n\n";
}

template <class T>void selectSort(T a[], long size)
{
	long i, j, k;
	T x;
	for(i=0;i<size;i++) 
	{
		k=i;
		x=a[i];
		for(j=i+1;j<size;j++)
		{
			if(a[j]<x)
			{
				k=j;
				x=a[j];				
				a[k]=a[i];
				a[i]=x;
			}
		}
	}
}


