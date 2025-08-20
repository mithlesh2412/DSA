#include <iostream>
using namespace std;
 // student is a new data type
class Car {
    public:
    string name;
    string model;
    int price;
    int speed;
    

};
void print(Car c){
    cout <<c.name <<" " <<c.model <<" " <<c.price <<" "<<c.speed <<endl;
}
int main()
{
  Car c1;
 c1.name ="Audii";
 c1.model = "s series";
 c1.price =1200000;
 c1.speed =300;

  Car c2;
 c1.name ="abc";
 c1.model = "q";
 c1.price =115000;
 c1.speed =350;

  Car c3;
 c1.name ="xyz";
 c1.model = "n series";
 c1.price =666666;
 c1.speed =100;
  
 print(c1);
 print(c2);
 print(c3);

 return 0;

  
}