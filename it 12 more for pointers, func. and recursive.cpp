#include<iostream>
using namespace std;

void PrintArr(int *arr, int szArr);

void PrintVariations(int *a, int n);
void PrintVariationsVer2(int *a, int n, int start = 0);

void ReversArr(int *arr, int size);
void ReversArrVer2(int *arr, int size);
void ReversArrVer3(int *arr, int size);

int main()
{
	cout<<sizeof(int)<<endl;//Показва размера на променливите в байтове.
	cout<<sizeof(bool)<<endl;
	cout<<sizeof(char)<<endl;
	
	int a[3];
	
    PrintVariations(a, 3);

	cout<<"--------------"<<endl;
	
	PrintVariationsVer2(a, 3);
	
	cout<<"--------------"<<endl;
	
	int const sz = 6;
	int arrRev[sz]	= {1,2,3,4,5,6};

	
	ReversArrVer2(arrRev,sz);
	
	PrintArr(arrRev, sz);
	ReversArr(arrRev, sz);
	PrintArr(arrRev, sz);
	
	int arrRev03[sz] = {4,5,6,1,4,2};
	
	PrintArr(arrRev03, sz);
	ReversArrVer3(arrRev03, sz);
	PrintArr(arrRev03, sz);
}

void PrintArr(int *arr, int szArr)
{
	for(int i = 0; i < szArr;i++,arr++)
	{
		cout<<*arr<<'\t';
	}
	cout<<"\n\n";
}

void PrintVariations(int *a, int n)
{
    if(n<=0)
	{
        PrintArr(a, 3);
        return;
    }
    //cout<<"In"<<endl;
    a[n-1]=0;
    PrintVariations(a, n-1);//отзад напред се вкарват числа в масива и всеки процес е паралелен на другия и паралелно вкарва числа с другите функции от рекурсията.
    a[n-1]=1;
    PrintVariations(a, n-1);
}

void PrintVariationsVer2(int *a, int n, int start)
{
    if(start == n)
	{
		cout<<4444<<endl;
        PrintArr(a, n);
        return;
    }
    cout<<9999999999999<<endl;
    a[start]=0;
    PrintVariationsVer2(a, n, start + 1);
    a[start]=1;
    PrintVariationsVer2(a, n, start + 1);
}

void ReversArr(int *arr, int size)
{
	int j;
	for(int i = 0; i<size/2; i++)
	{
		j = *(arr+i);
		*(arr+i) = *(arr+size-1-i);
		*(arr+size-1-i) = j;
	}
}

void ReversArrVer2(int *arr, int size)
{
	
	for(int i = 0; i<size;i++)
	{
		cout<<*(arr+size-1-i)<<'\t';
	}
	cout<<"\n\n";	
}

void ReversArrVer3(int *arr, int size)
{
	int tmp;
	int *second = &arr[size-1];
	for(int i = 0; i<size/2; ++i, arr++, second--)
	{
		tmp = *arr;
		*arr = *second;
		*second = tmp;
	}
}

