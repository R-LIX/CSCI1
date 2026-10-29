//
// Created by Ravis Rank Willix on 10/7/26.
//

#include <iostream>
#include <cmath>


using namespace std;
class rectangle {
public:
    double side1, side2;
    double area() {
        return side1*side2;
    }
};
class student {
public:
    int id, age;
    string name;
    void in() {
        cout<<"id:";
        cin>>id;
        cout<<"age:";
        cin>>age;
        cout<<"name:";
        cin>>name;
    }
 void display() {
     cout<<id<<endl<<name<<endl<<age;
 }

};
int main() {
    // rectangle r1;
    //  r1.side1=10;
    // r1.side2=30;
    // cout<<r1.area();
    student n1;
    n1.age=12;
    n1.id=1;
    n1.name="Oscar";
    n1.in();
    n1.display();
    return 0;
}
