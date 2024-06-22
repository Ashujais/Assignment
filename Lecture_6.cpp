/* #include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Give 2 floating point numbers as input"<<endl;
    cin>>a,b;

    if(a>0.01 && b>a)
    {
        cout<<"The condition in if statement is correct";
    }
    else
    {
        cout<<"The condition is false";
    }
}  */

/*#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Students, please enter the marks to calculate the grades : ";
    cin>>marks;

    if(marks>90)
    {
        cout<<"A";
    }
    else if(marks>80)
    {
        cout<<"B";
    }
    else if(marks>70)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Pass";
    }
}
*/

/* #include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Give four integer as input: a,b,c and d"<<endl;
    cin>>a>>b>>c>>d;

    if(a>b && c>d)
    {
        cout<<"haha";
    }
    else if(a>b && c<d)
    {
        cout<<"hehe";
    }
    else if(a<b && c>d)
    {
        cout<<"huhu";
    }
}  */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter an integer a"<<endl;
    cin>>a;

    switch (a)
    {
    case 1:
        cout<<"The value of a is 1";
        break;
    case 2:
        cout<<"The value of a is 2";
        break;
    case 3:
        cout<<"The value of a is 3";
    default :
        cout<<"default will be always printed";
        break;
    }

    return 0;
}
