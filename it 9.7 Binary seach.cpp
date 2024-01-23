#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int BinarySearch (int A[], int Lb, int size, int Key);
template <class T>void quickSortR(T a[], long N);

int main()
{
	srand(time(NULL));
	const long SIZE=10;
	int ar[SIZE];
	int key,ind;
	
	for(int i=0;i<SIZE;i++)
	{
		ar[i]=rand()%100;
		cout<<ar[i]<<"\t";
	}
	cout<<"\n\n";
	
	quickSortR(ar,SIZE-1);

	for(int i=0;i<SIZE;i++)
	{
		cout<<ar[i]<<"\t";
	}
	cout<<"\n\n";
	
	cout<<"\n\n";
	cout<<"Enter any digit:"; cin>>key;
	ind = BinarySearch(ar,0,SIZE,key);
	cout<<"Index - "<<ind<<"\t";
	cout<<"\n\n";
}

int BinarySearch (int A[], int Lb, int Ub, int Key)
{
	int M;
	while(1)
	{
		M = (Lb + Ub)/2;
		
		if (Key < A[M])
			Ub = M - 1;
		else if (Key > A[M])
			Lb = M + 1;
		else
			return M;
		if (Lb > Ub)
			return -1;
	}
}
//any sort.
template <class T>void quickSortR(T a[], long N)
{
	long i = 0, j = N;
	T temp, p;
	p = a[ N/2 ]; 
	do
	{
		while ( a[i] < p ) i++;
		{
			while ( a[j] > p ) j--;
			{
				if (i <= j)
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					i++;
					j--;
				}
			}
		}
	}while ( i<=j );
	
	if ( j > 0 )
	{
		quickSortR(a, j);
	}
	if ( N > i ) 
	{
		quickSortR(a+i, N-i);
	}
}

