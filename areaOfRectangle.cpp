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

        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
        cout<<"Area of the rectangle = "<<calculateArea(length,width);

    return 0;
}