//
// Created by Ravis Rank Willix on 9/2/26.
//
#include <iostream>
#include<cmath>
// Header for input/output functions
using namespace std;
int main () {
    double x,y;
    int z;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the operation: ";
    cin>>z;
    switch (z) {
        case 1:
            cout<<"You chose addition: "<<x+y;
            break;
        case 2:
            cout<<"You chose subtraction: "<<x-y;
            break;
        case 3:
            cout<<"You chose multiplication: "<<x*y;
            break;
        case 4:
            cout<<"You chose division: "<<x/y;

            break;
        case 5:
            cout<<"You chose power: "<<pow(x,y);
            break;
        default:
            cout<<"Error!";
    }


}