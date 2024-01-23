#include<iostream>
using namespace std;

int SumOfArr(int arr[], int szArr);

int main()
{
	const int szInArr = 5;
	int arrf1[szInArr] = {14,5,32,1,12};
	const int szInArr02 = 7;
	int arrf2[szInArr02] = {15,22,32,6,13,0,4};
	cout<<SumOfArr(arrf1,szInArr)<<endl;
	cout<<SumOfArr(arrf2,szInArr02)<<endl;
}

int SumOfArr(int arr[], int szArr)
{

	if(szArr < 0)
	{
		return 0;
	}
	else
	{
		return arr[szArr-1] + SumOfArr(arr,szArr - 1);
	}

}

