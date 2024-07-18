#include<iostream>
using namespace std;

// class Student
// {
//     private:

//     int marks;
//     int attendence;
//     string name;

//     public:

//     void displaymarks()
//     {
//         cout<<marks;
//     }
// };

class Vehicle
{
    public:

    int number_types;
    string name;
    int capacity;
    int mileage;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }

};

class SchoolBus: private Vehicle
{
    // private:

    // int number_types;
    // string name;
    // int capacity;
    // int mileage;

    string school_name;

    int number_holidays;

    public:

    // void calculatemileage()
    // {
    //     cout<<"The mileage is "<<mileage;
    // }

    void printnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }

};

class Car: public Vehicle
{
    private:

    // int number_types;
    // string name;
    // int capacity;
    // int mileage; 

    int number_airbags;
    int ac_consumption;
    
    // public:

    // void calculatemileage()
    // {
    //     cout<<"The mileage is "<<mileage;
    // }

};

int main()
{
    // int marks;
    // int attendence;
    // string name;

    Car a;

    a.mileage = 50;

    a.calculatemileage();
}

