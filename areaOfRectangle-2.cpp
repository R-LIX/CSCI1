//
// Created by Ravis Rank Willix on 9/16/26.
//
//
// Created by Ravis Rank Willix on 9/14/26.
// Calculate the Area of a Rectangle Using a Function
#include <iostream>
using namespace std;
double calculateArea(double length, double width) {
    double area = length * width;

    return area;
}
int main() {
    double length, width;
    for (int i=1; i<=3;i++) {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
        cout<<"Area of the rectangle = "<<calculateArea(length,width)<<endl;;
    }
    return 0;
}