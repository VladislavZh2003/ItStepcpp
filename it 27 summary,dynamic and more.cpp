#include <iostream>
using namespace std;

int main()
{
	int* p = NULL;
	p = new int;
	*p = 5;
	delete p;
	
	int* pa;
	pa = new int[20];
	delete [] pa;
}

