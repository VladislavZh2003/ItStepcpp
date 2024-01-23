#include<iostream>
using namespace std;

template<typename T> T CompareTwoArrays(T arr01[], int sizeOfArray01, T arr02[], int sizeOfArray02);

int main()
{
	const int szArr = 4;
	const int szArr5 = 5;
	
	int ArrayA[] = {7,4,90,321};
	int ArrayB[] = {7,4,90,321};
	int ArrayC[] = {7,4,34,321};
	
	double ArrayD[] = {7,4,90,321};
	double ArrayE[] = {7,4,90,321.9};
	double ArrayF[] = {7,4,90,321};

	int ArrayG[] = {7,4,90,321,56};
	
	if(CompareTwoArrays(ArrayA, szArr, ArrayB, szArr) == 0)
	cout<<"They are equal!"<<endl;
	else
	cout<<"They are not equal!"<<endl;
	if(CompareTwoArrays(ArrayA, szArr, ArrayC, szArr) == 0)
	cout<<"They are equal!"<<endl;
	else
	cout<<"They are not equal!"<<endl;
	if(CompareTwoArrays(ArrayD, szArr, ArrayF, szArr) == 0)
	cout<<"They are equal!"<<endl;
	else
	cout<<"They are not equal!"<<endl;
	if(CompareTwoArrays(ArrayD, szArr, ArrayE, szArr) == 0)
	cout<<"They are equal!"<<endl;
	else
	cout<<"They are not equal!"<<endl;
	if(CompareTwoArrays(ArrayA, szArr, ArrayG, szArr5) == 0)
	cout<<"They are equal!"<<endl;
	else
	cout<<"They are not equal!"<<endl;
	

}

template<typename T> T CompareTwoArrays(T arr01[], int sizeOfArray01, T arr02[], int sizeOfArray02)
{
	if(sizeOfArray01 == sizeOfArray02)
	{
		for(int i = 0; i < sizeOfArray01; i++)
		{
			if(arr01[i] != arr02[i])
			{
				return -1;
			}
		}
		return 0;
	}
	return -1;
}
