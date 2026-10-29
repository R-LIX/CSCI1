//
// Created by Ravis Rank Willix on 10/7/26.
//
#include <iostream>
using namespace std;
class Circle {
public:
    double radius;
    string name;
    void input() {
        cout<<"Enter the number of Circle: ";
        cin>>name;
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
    double area() {
        return 3.14*radius*radius;
    }
};
int main() {
    Circle c1, c2;
    c1.input();
    c2.input();
    cout<<c1.area()<<endl;
    cout<<c2.area();
    return 0;
}