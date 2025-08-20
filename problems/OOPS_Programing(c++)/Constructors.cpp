#include <iostream>
using namespace std;
class student {
    public:
    string name;
    int age;
    int roll_no;

    student()   // default constructor
    {

    }


    student( string s,int a ,int r){ // parameterised constructer
        name = s;
        age = a;
        roll_no = r;


    }
};
int main()
{
    student s1("xyz",20,87);
    cout <<s1.name <<" "<<s1.age <<" "<<s1.roll_no <<endl;
 student s2("zyx",20,8.0);
 cout <<s2.name <<" "<<s2.age <<" "<<s2.roll_no <<endl;
   
}