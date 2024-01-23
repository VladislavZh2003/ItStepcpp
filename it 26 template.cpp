#include <stdio.h>
#include <iostream>
using namespace std;
   
//Function templates - uses placeholder type(template type parameters)  
template <class T>
T sum(T a,T b){
    return a+b;
}

template <class T, class U>
T smaller(T a, U b){//int smaller(int a,double b)
    return (a<b?a:b);
}

//Class templates

template <class T>
class MyClass{
    private:
        T first, second;
    public:
        MyClass(T a, T b):first(a),second(b){
        }
        T bigger();
};

template< >//empty parameter list
class MyClass<char> {
    public:
        MyClass(char x){
            cout<<x<<"is a char!"<<endl;
        }
};

//T MyClass<T>::bigger(){
//     
//}

//template specialization
int main()
{
    double a = 10.5;
    double b = 15.6;
    cout<<sum(a,b)<<endl;
    
    MyClass <int> obj(11,122);
    MyClass <float> obj1(5.4,54.8);
    MyClass <char> ob3('s');
    
    return 0;
}

