#include <iostream>
using namespace std;

int SquarePerimeter(int sideA, int sideB)
{
	int sPer = sideA*2 + sideB*2;
	sideA<=0 || sideB<=0 ? sPer= -1 :sPer = sPer;
	return sPer;
	/*if(sideA<=0 || sideB<=0)
	{
		return -1;
	}
	else
	{
		return sPer;
	}*/
}

float FindPer(float sideA, float sideB, float sideC)
{
	float p = sideA + sideB + sideC;
	return p;//��� ��������� � �� ������� ��� ������ ������������ �� ������ return.
}

void FindPerimeter(float sideA, float sideB, float sideC)
{
	if(sideA == 3335324)
	{
		return;//return ����� �� ��������� ���� break, �� �� ������� �� ���������.
	}
	else
	{
		float pind = FindPer(1,3,5);//����� �� �������� ������� �� ����������, �� � ����� ��������� �� � ���������� ����� ���������, � ����� ����������� �� ����������
		float p = sideA + sideB + sideC;
		cout<<"a="<<sideA<<" b="<<sideB<<" c="<<sideC<<endl;
		cout<<"P="<<p<<endl;
	}
}

int main()
{
	float a=6,b=3,c=1;
	FindPerimeter(6,4,5);
	FindPerimeter(3335324,4,5);
	FindPerimeter(a,b,c);
	cout<<FindPer(a, b, c)<<endl;//������ �� cout, ������ ��������� FindPer � �� ������� ���.
	int pp = FindPer(2,5,19);//�� ����� �� �������� FindPerimeter �� ����� ���������� ������ � void.
	cout<<pp<<endl;
	cout<<SquarePerimeter(4,-2)<<endl;
	cout<<SquarePerimeter(4,2)<<endl;
}

