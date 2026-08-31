#include <iosfwd>
#include <iostream>
#include <iomanip>
//
// Created by Ravis Rank Willix on 8/26/26.
//
using namespace std;
string name;
int age;
double GPA;
char grade;
bool Enrollment;


int main() {
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your GPA: ";
    cin>>GPA;
    cout<<"Enter your grade: ";
    cin>>grade;
    cout<<"Are you Enrolled ";
    cin>>Enrollment;
    cout<<"Name: "<<name<<" Age: "<<age<<" GPA: "<<fixed<<setprecision(2)<<GPA<<" Grade: "<<grade<<" Enrollment: "<<boolalpha<<Enrollment<<endl;
return 0;
}