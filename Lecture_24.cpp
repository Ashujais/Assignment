// #include<iostream>
// using namespace std;

// void swap(int *x, int *y)
// {
//     int c;

//     c = *x;
//     *x = *y;
//     *y = c;

//     cout<<"The swapping is complete"<<endl;

// }

// int main()
// {
//     int a,b;

//     a=3;
//     b=4;

//     swap(&a, &b);

//     cout<<"The values of a and b after the swap are: "<<a<<" "<<b;

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int a[10];

    cout<<"value of comparison : "<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of address a[0] is "<<&a[0]<<endl;
    cout<<"The value of address a[1] is "<<&a[1]<<endl;

    return 0;
}