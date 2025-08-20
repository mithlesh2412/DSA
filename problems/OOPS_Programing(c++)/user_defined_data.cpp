#include <iostream>
using namespace std;
class student { // student is a new data type
    public:
    string name;
    int rno;
    int age;
    float cgpa;
 
};
class car {
    public:
    string name;
    string model;
    int price;
    int speed;
    int cc;

};
int main()
{
    student s1;
    s1.name ="Mithlesh";
    s1.rno =87;
    s1.age =20;
    s1.cgpa =7.0;

    student s2;
    s2.name ="Samir";
    s2.rno =89;
    s2.age =21;
    s2.cgpa =7.3;


    cout <<s1.name <<" " <<s1.rno << " " <<s1.age <<" " <<s1.cgpa <<endl;
    cout <<s2.name <<" " <<s2.rno << " " <<s2.age <<" " <<s2.cgpa <<endl;


 car c1;
 c1.name ="Audii";
 c1.model = "s series";
 c1.price =1200000;
 c1.speed =300;

 cout <<c1.name <<" " <<c1.model <<" " <<c1.price <<" " <<c1.speed <<endl;
 }