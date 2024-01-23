Notes only today!

inline int f(int,int)
//Here the compilator just read and run the code in function after call in main.
//You can't make recursive here! 

int f(int a)
{
	return ++a;//out: 6
	return a++;//out: 5
}
//int *p
//(*p)++
int main()
{
	f(5);
}
