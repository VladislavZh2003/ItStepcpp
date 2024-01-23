#include<iostream>
using namespace std;

int LinearSearch (int array[], int size,int key);

int main()
{
	const int arraySize=100;
	int a[arraySize], searchKey, element;
	for(int x=0;x<arraySize;x++)
	{
		a[x]=2*x;
	}
	/*Следващия ред изкарва на екрана
	съобщението „Моля въведете ключ“: */
	cout<<"Please, enter the key: ";
	cin>>searchKey;
	element=LinearSearch(a, arraySize, searchKey);
	
	if(element!=-1)
	{
		/*Следващия ред изкарва на екрана
		съобщение: Ключът е намерена в елемента
		*/
		cout<<"\nThe key was found in element "<<element<<'\n';
	}
	/*Следващия ред изкарва на екрана
	съобщението Няма намерена стойност */
	else
	{
		cout<<"\nValue not found ";
	}
}

int LinearSearch (int array[], int size,int key)
{ 
	for(int i=0;i<size;i++)
	{
		if(array[i] == key)
		{
			return i;
		}
	}
	return -1;
}
