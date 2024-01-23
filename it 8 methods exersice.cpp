#include<iostream>
using namespace std;

template<typename T> T printSumArr(T arr[], int sizeOfArr);
template<typename F> F FindNumberPosition(F arr[], int sizeOfArr, F arfarr);
int FindZero(double arr[], int sizeOfArr);

template<typename T> T Perimeter(T sideA);
template<typename T> T Perimeter(T sideA, T sideB);
template<typename T> T Perimeter(T sideA, T sideB, T sideC); //overloading - презареждане

template<typename T> T TheBiggestElementOfArray(T arr[], int sizeOfArray);

int main()
{
	char plus = '+';
	const int szAr = 8;
	int mArr[] = {1,4,6,34,63,4,643,123};
	double fArr[szAr] = {33,43,9.07,0,34,0,234.9810,54.065};
	for(int i = 0; i < szAr; i++)
	{
		cout<<fArr[i]<<plus;
	}
	cout<<" =";
	cout<<printSumArr(fArr, szAr)<<endl;
	cout<<printSumArr(mArr, szAr)<<endl;
	

	double fArr1[] = {1,1,1,1,1,1,1,1};
	cout<<FindZero(fArr,szAr)<<endl;
	cout<<FindZero(fArr1,szAr)<<endl;
	cout<<FindNumberPosition(fArr, szAr, 9.07)<<endl;
	
	cout<<Perimeter(3)<<endl;
	cout<<Perimeter(3,43)<<endl;
	cout<<Perimeter(3,43,8)<<endl;
	
	cout<<TheBiggestElementOfArray(fArr,szAr)<<endl;
}

template<typename T> T printSumArr(T arr[], int sizeOfArr)
{
	T result = 0;
	for(int i = 0;i < sizeOfArr;i++)
	{
		result += arr[i];
	}
	return result;
}


int FindZero(double arr[], int sizeOfArr)
{
	for(int i = 0; i < sizeOfArr; i++)
	{
		if(arr[i] == 0)
		{
			return i;
		}
	}
	return -1;
}

template<typename F> F FindNumberPosition(F arr[], int sizeOfArr, F arfarr)
{
	for(int i = 0; i < sizeOfArr; i++)
	{
		if(arr[i] == arfarr)
		{
			return i;
		}
	}
	return -1;
}

template<typename T> T Perimeter(T sideA)
{
	return sideA*4;
}

template<typename T> T Perimeter(T sideA, T sideB)
{
	return sideA*2 + sideB*2;
}

template<typename T> T Perimeter(T sideA, T sideB, T sideC)
{
	return sideA + sideB + sideC;
}

template<typename T> T TheBiggestElementOfArray(T arr[], int sizeOfArray)
{
	T res;
	res = arr[0];
	for(int i = 1; i < sizeOfArray; i++) //Започваме от едно(i = 1), за да не правим първото сравнение, което е първия елемент сам със себе си. 
	{
		if(res < arr[i])
		{
			res = arr[i];
		}
	}
	return res;
}




