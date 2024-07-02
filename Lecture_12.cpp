// #include<iostream>
// using namespace std;

// int main()
// {
//     int password;

//     cout<<"Enter the password"<<endl;
//     cin>>password;

//     while(password<999999)
//     {
//         cout<<"The password does not meet the required conditions, Please enter the passowrd again";
//         cin>>password;
//     }
//     cout<<"The user has now entered a correct password"<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int password;

//     do
//     {
//         cin>>password;
//     }
//     while(password<999999);

//     cout<<"The user has now entered a correct password<<endl";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int count=0;

//     while(1)
//     {
//         cout<<"choclates ";
//         count++;
//         if(count>100) break;
//     }
    
// }

#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i=0; ;i++)
    {
        cout<<i<<" ";
        if(i>100) break;
    }

    return 0;
}