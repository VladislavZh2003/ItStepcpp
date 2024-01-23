#include<iostream>
using namespace std;

int Perimeter (int a, int b = 0, int c = 0, int d = 0);

int f(int a = 0,int b = 2, int c = 0);//camo тук се пишат дефолтни стойности camo ако имаш прототип, ако нямаш прототип пишеш стойностите при дефиницията
//Ако се използват стойности могат да се пишат само от дясно наляво, без да се прескачат елементи
//Примерно (b) не може да няма дефолтна стойност в нашият прототип ако искаме и (а) да има стойност
int main()
{
	cout<<f(3,7,1)<<endl;
	cout<<f()<<endl;
	
	cout<<Perimeter(5)<<endl;
	cout<<Perimeter(2,7)<<endl;
	cout<<Perimeter(17,4,8)<<endl;
	cout<<Perimeter(1,5,11,9)<<endl;
	
	return 0;
}

int f(int a,int b, int c )
{
	return a + b + c;
}

int Perimeter (int a, int b, int c, int d)
{
	if (a > 0 && b == 0 && c == 0 && d == 0)//Може и без тези ...==0, !но само ако ифовете са наредени наобрано и всички са само if
	return a * 4;
	else if(a > 0 && b > 0 && c == 0 && d == 0)
	return a*2 + b*2;
	else if(a > 0 && b > 0 && c > 0 && d == 0)
	return a + b + c;
	else
	return a + b + c + d;
}

