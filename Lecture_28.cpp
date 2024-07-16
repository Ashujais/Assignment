#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int attendence;
    float total_marks;
    
    void claculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};

class Bank_client
{
    // public:
    private:

    string name;
    int credit_number;
    int cvv;
    string user_name;
    string password;

    public:
    // string name;
    // string user_name;

    void set_credit_card_number(int number)
    {
        credit_number = number;
    }

    int get_creditcardnumber()
    {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }

    void set_allthestuffatonce(int number, int name, int pass)
    {
        credit_number = number;
        name = name;
        password = pass;
    }
};

int main()
{
    // Student a,b,c;

    // a.name= "Rohit";
    // a.attendence = 90;
    // a.total_marks = 69;

    // a.claculate_percentage();

    Bank_client a,b,c;

    // a.name = "rohit";

    a.set_credit_card_number(9835932459);
    a.get_creditcardnumber();
    // a.password = "Enjoyc++";
    // a.cvv = 788;
    // a.credit_number = 34723849;

    // cout<<"The password of rohit is "<<a.password;
    // cout<<a.cvv;
    // cout<<a.credit_number;

    return 0;
}