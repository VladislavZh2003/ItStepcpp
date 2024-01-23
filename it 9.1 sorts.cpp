#include<iostream>
using namespace std;

void PrintArray(int arr[], int arrSize);
void SortArr(int arr[], int arrSize);

int main()
{
	int asv[] = {11,8,6,5,3,1,6};
	PrintArray(asv,7);
	SortArr(asv,7);
}

void PrintArray(int arr[], int arrSize)
{
	for(int i = 0; i<arrSize; i++)
	{
		cout<<arr[i]<<'\t';
		
	}
	cout<<endl;
}
void SortArr(int arr[], int arrSize)
{
	int temp;
	for(int i = 0; i<arrSize; i++)
	{
		for(int j = 0; j<arrSize-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1]; 
				arr[j+1] = temp; 
			}
		}
	}
	PrintArray(arr,arrSize);
}



