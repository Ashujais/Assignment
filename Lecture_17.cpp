#include<iostream>
using namespace std;

void PrintHi()
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b)
{
    int c;

    c=a+b;
    a=500;

    cout<<"The value of c is "<<c<<endl;

    return c;
}

int main()
{
    PrintHi();

    int a,b;
    a=4;
    b=6;
    int c=75;

    int d;
    d=sum(a,b);

    //cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;

    cout<<"The value of c is "<<c<<endl;

    return 0;
}