#include<iostream>
using namespace std;

class student
{
    public:

    string name;
    int mids;
    float ends;
    bool pre_abs;

    void display_calculate_marks()
    {
        float total_marks;

        total_marks = mids*0.5 + ends*0.75;

        cout<<"The marks of "<<name<<"is "<<total_marks;
    }

    void totalmarksincludingproject(int project_marks)
    {
        cout<<mids+ends+project_marks;
    }

    void calculate_fail_probability()
    {
        if(ends<=10) cout<<"Yes this student needs to attend the same class for one more year";
    }
    
};

class vehicle
{
    public:

    string car_name;
    string tyre_name;
    int number_of_tyres;
    int number_of_seats;
    int number_of_miles_travelled;

    void distancetravelledbycar()
    {
        cout<<number_of_miles_travelled;
    }

};

int main()
{
    student a;

    // int d,e,f;

    // vehicle hyudni, suzuki, ferrari;

    a.name = "Rohit";
    a.mids = 50;
    a.ends = 99.5;
    a.pre_abs = 1;

    a.display_calculate_marks();
    a.totalmarksincludingproject(10);

    vehicle b;

    b.car_name = "verna";
    b.number_of_seats = 2;
    b.number_of_tyres = 4;
    b.tyre_name = "Michellen";

}