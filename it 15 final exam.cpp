#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <cstdio>
#include <string>
using namespace std;

int OutputManyPositiveConsisNumbers(int *arr,int size);
int OutputManyPositiveConsisNumbersVer2(int *arr,int size);
void PrintRandPassword();

int main()
{
	srand(time(NULL));
	
	const int size = 11;
	int arr[size] = {87,0,92,8,-34,0,45,2,12,-5,0};
	cout<<OutputManyPositiveConsisNumbers(arr,size)<<endl;
	cout<<OutputManyPositiveConsisNumbersVer2(arr,size)<<endl;
	
	PrintRandPassword();
	
}

int OutputManyPositiveConsisNumbers(int *arr,int size)
{
	int counter = 0;
	int forCount[size];
	
	int theBiggest;
	
	for(int i = 0; i<size; i++,*arr++)
	{
		if(*arr > 0)
		{
			counter++;
			forCount[i] = 0;
		}
		else
		{
			forCount[i] = counter;
			counter = 0; 
		}
	}
	
	theBiggest = forCount[0];
	
	for(int i = 0; i<size; i++)
	{
		if(theBiggest < forCount[i])
		{
			theBiggest = forCount[i];
		}
	}
	
	return theBiggest;
}

int OutputManyPositiveConsisNumbersVer2(int *arr,int size)
{
	int counter = 0;
	int maxCount = 0;
	
	for(int i = 0; i<size; i++,*arr++)
	{
		if(*arr > 0)
		{
			counter++;
			if(counter > maxCount)
			maxCount = counter;
		}
		else
		{
			counter = 0;
		}
	}
	return maxCount;
}

void PrintRandPassword()
{
	srand(time(NULL));
	
	int randNum = rand()%90+10;
	int randNumForStr = rand()%6;
	int randOfSpWord = rand()%18;
	
	char fStr[20];
	char buff[20];
	
	switch(randNumForStr)
	{
		case 0:
			strcpy(fStr, "pass");
			break;
		case 1:
			strcpy(fStr, "password");
			break;
		case 2:
			strcpy(fStr, "passwd");
			break;
		case 3:
			strcpy(fStr, "pswd");
			break;
		case 4:
			strcpy(fStr, "Pas");
			break;
		case 5:
			strcpy(fStr, "Psw");
			break;
		default:
		break;
	}
	char newStr[20];

	itoa (randNum,buff,10);
	strcpy(newStr, strcat(fStr,buff));
	
	char addS[19] = "CoMpl3xP@$$word135";
	char stTwo[100];

	int lenAdds = strlen(addS);
	
	for(int i = 0; i <= randOfSpWord; i++)
	{
		stTwo[i] = addS[i];
	}
	
	char finalPass[100];
	
	strcpy(finalPass, strcat(newStr,stTwo));
	puts(finalPass);
	
}

