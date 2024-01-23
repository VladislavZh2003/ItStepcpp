#include<iostream>
using namespace std;

int SumOfArr(int *arr, int size);
int SumOfArrVer2(int *arr, int size);
void PrintArr(int *arr, int arrSize);
void Change(int *arr);

int& f(int a[], int arrSize);

int main()
{
	const int size = 5;
	int Arr[size] = {2,4,2,7,1};
	cout<<SumOfArr(Arr,size)<<endl;
	cout<<SumOfArrVer2(Arr,size)<<endl;
	PrintArr(Arr,size);
	Change(Arr);
	PrintArr(Arr,size);
	
	cout<<"-----------------------"<<endl;

	int a = 8;
	int *p; //Със звездичка се задава указател. Пише се някакъв тип пред указателя за да се знае този указател какъв тип елементи достъпва.
	cout<<a<<endl;
	cout<<&a<<endl;// & - може да се сложи пред която и да е променлива. Обаче така се достъпва адреса на променливата.
	cout<<p<<endl;
	p = &a;//приема адреса на а
	cout<<p<<endl;//адреса който доцтъпва p
	cout<<*p<<endl;//стойността в p
	cout<<&p<<endl;//адреса на p
	*p = 18;
	cout<<a<<endl;
	//p++ - овеличаваме адреса, а не стойността.
	cout<<"-----------------------"<<endl;
	
	int as = 8, bs=13;
	cout<<&as<<endl;
	cout<<&bs<<endl;
	int *ps;
	ps = &bs;
	cout<<*ps<<endl;
	ps++;
	cout<<*ps<<endl;
	
	cout<<"-----------------------"<<endl;
	
	int d[] = {1,4,3,2};//елементите на масива са подредени последователно в паметта
	int *c;
	c = &d[0];
	c = d;//името на масива е адрес към първия елемент на масива
	cout<<d<<endl;
	cout<<&d[0]<<endl;
	
	cout<<c<<'\t'<<*c<<endl;
	c++;
	cout<<c<<'\t'<<*c<<endl;
	c++;
	cout<<c++<<endl;
	cout<<c<<'\t'<<*c<<endl;
	
	for(int i = 0; i<4; i++)
	{
		cout<<*c--<<endl;
	}
	
	cout<<"-----------------------"<<endl;
	
	int w1[] = {1,4,3,2};
	int *w;
	w = w1;
	
	cout<<*w<<endl;
	cout<<*(w+1)<<endl;
	cout<<*w<<endl;
	
	cout<<endl;
	
	for(int i = 0; i<4; i++)
	{
		cout<<*(w+1)<<endl;
	}
	cout<<"\n\n";
	
	for(int i = 0; i<4; i++)
	{
		cout<<*(w+i)<<endl;
	}
	cout<<"\n\n";
	
	for(int i = 0; i<4; i++)
	{
		cout<<*w++<<endl;
	}
	
	cout<<"-----------------------"<<endl;
	
	int x = 15;
	int &xx = x;//референция към променлива и този вид референция сочи само към тази променлива и не може да се променя.
	cout<<xx<<endl;
	xx++;//така променям стойността на х защото хх сочи към х.
	cout<<x<<endl;
	
	//int *p = &x;//създаваме указател кйто сочи към мястото на х в стойността
    //(*p)++;//така увеличаваме стойността на х
    //*p++;//така увеличаваме р, а то е някакъв адрес. И отиваме в друг адрес.
    
    cout<<"-----------------------"<<endl;
    
    int arrX[] = {1,-2,3,4};
    cout<<arrX[1]<<endl;
    f(arrX,4) = 1000;
    //or: 
	//int& b = f(arrX,4);
    //b = 1000;
    cout<<arrX[1]<<endl;
	
}

int& f(int a[], int arrSize)//функция, която връща референция(връзка) към число.
{
	int a1 = 0;
	for(int i = 0; i<arrSize; i++)
	{
		if(a[i]<0)
		{
			return a[i];
		}
	}
	return a1;//не може да връща нищо.
}

int SumOfArr(int *arr, int size)
{
	int sum = 0;
	for(int i = 0; i<size; i++,arr++)
	{
		sum += *arr;
		//or: sum += *arr++; не трябва да го има в скобите на фор
	}
	return sum;
}

int SumOfArrVer2(int *arr, int size)
{
	int sum = 0;
	for(int i = 0; i<size; ++i)
	{
		sum += *(arr+i);
	}
	return sum;
}

void PrintArr(int *arr, int arrSize)
{
	for(int i = 0; i<arrSize; ++i,arr++)
	{
		cout<<*arr<<'\t';
	}
	cout<<endl;
	
	/*for(int i = 0; i<arrSize; ++i)
	{
		cout<<*arr++<<'\t';
	}*/
}

void Change(int *arr)
{
	*arr = 123;
}

