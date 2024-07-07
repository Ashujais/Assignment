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

    //cout<<"The value of c is "<<c<<endl;

    return c;
}

//void swap(int a, int b)
void swap(int &a, int &b)
{
    int c;
    c=a;
    a=b;
    b=c;

    cout<<"The value of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;

    return;

}
void fun(int &a, int b)
{
    a=99999;
    b=99999;

    cout<<"The value of a and b after inside fun function are : "<<a<<" "<<b<<endl;
}

int main()
{
    PrintHi();

    int a,b;
    a=4;
    b=6;

    cout<<"The value of a and b before passing into the fun function are are: "<<a<<" "<<b<<endl;
    //int c=75;

    swap(a,b);

    cout<<"The value of a and b after passing into the fun function are : "<<a<<" "<<b<<endl;

    return 0;
}