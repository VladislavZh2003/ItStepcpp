#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>void insertSort(T a[], long size);
template <class T>void setMin(T a[],long size);
template <class T>void insertSortGuarded(T a[], long size);

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
	insertSort(ar,SIZE);
	
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
	insertSortGuarded(ar01,siZE);
	
	for(int i=0;i<siZE;i++)
	{
		cout<<ar01[i]<<"\t";
	}
	cout<<"\n\n";
}

template <class T>void insertSort(T a[], long size)
{
	T x;
	long i, j;
	
	for(i=0;i<size;i++)
	{
		x=a[i];
		
		for(j=i-1;j>=0&&a[j]>x;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1] = x;
	}
}

template <class T>void setMin(T a[],long size)
{
	T min=a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	a[0]=min;
}

template <class T>void insertSortGuarded(T a[], long size)
{
	T x;
	long i, j;
	T backup = a[0];
	
	setMin(a,size);
	
	for(i=1;i<size;i++)
	{
		x = a[i];
		for(j=i-1;a[j]>x;j--)
		{
			a[j+1]=a[j];	
		}
		a[j+1] = x;
	}
	
	for(j=1;j<size&&a[j]<backup;j++)
	{
		a[j-1]=a[j];
	}
	a[j-1] = backup;
}


