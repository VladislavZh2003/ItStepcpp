#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>void bubbleSort(T a[], long size);
template <class T>void shakerSort(T a[], long size);

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
	
	bubbleSort(ar,SIZE);
	
	for(int i=0;i<SIZE;i++)
	{
		cout<<ar[i]<<"\t";
	}
	cout<<"\n\n";
	////
	const long siZE=10;
	int ar01[siZE];
	for(int i=0;i<siZE;i++)
	{
		ar01[i]=rand()%100;
		cout<<ar01[i]<<"\t";
	}
	cout<<"\n\n";
	shakerSort(ar01,siZE);
	
	for(int i=0;i<siZE;i++)
	{
		cout<<ar01[i]<<"\t";
	}
	cout<<"\n\n";
}

template <class T>void bubbleSort(T a[], long size)
{
	long i, j;
	T x; 
	for(i=0;i<size;i++)
	{ 
		for(j=size-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				x=a[j-1];
				a[j-1]=a[j];
				a[j]=x;
			}
		}
	}
}

template <class T>void shakerSort(T a[], long size) 
{ 
	long j, k=size-1;
	long lb=1, ub=size-1;
	T x;
	do
	{
		for(j=ub;j>0;j--)
		{
			if(a[j-1]>a[j])
			{
				x=a[j-1]; 
				a[j-1]=a[j];
				a[j]=x;
				k=j;
			}
		}
		lb = k+1;
		
		for(j=1;j<=ub;j++)
		{
			if(a[j-1]>a[j])
			{
				x=a[j-1]; 
				a[j-1]=a[j];
				a[j]=x;
				k=j;
			}
		}
		ub=k-1;
	}while (lb<ub);
}

