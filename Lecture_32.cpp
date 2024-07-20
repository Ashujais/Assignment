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

    // public:

    // void calculatemileage()
    // {
    //     cout<<"The mileage is "<<mileage;
    // }

};

class SchoolBus: public Vehicle
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

    void printname()
    {
        cout<<"halaulueah "<<name;
    }

};

class Car: public Vehicle
{
    public:

    // int number_types;
    // string name;
    // int capacity;
    // int mileage; 

    int number_airbags;
    int ac_consumption;

    public:

    // void set_mileage(int mileage)
    // {
    //     this->mileage = mileage;
    // }
    
    // // public:

    void printname()
    {
        cout<<name;
    }

    // void number_0f_airbags()
    // {
    //     cout<<"The number of airbags is "<<number_0f_airbags;
    // }

};

class SUV: public Car{
    public:

    int four_wheel_drive;

};

int main()
{
    // int marks;
    // int attendence;
    // string name;

    Car a;
    SchoolBus b;


    a.name = "Suzuki";

    a.name = "Toyota";

    a.printname();
    cout<<endl;
    b.printname();

    // a.mileage = 50;

    // a.set_mileage(50);
    // // a.set_mileage(50);

    // a.calculatemileage();
}

