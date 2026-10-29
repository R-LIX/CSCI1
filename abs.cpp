//
// Created by Ravis Rank Willix on 9/14/26.
/*3. Find the Difference Between Two Scores using abs()
Write a C++ program that asks the user to enter the scores of two students.
Calculate and display the positive difference between the two scores.
Use:
abs()*/
#include<iostream>
#include <cmath>

using namespace std;
double absolute(double a, double b) {
    double c=abs(a-b);
    return c;
}
int main() {
    double a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<absolute(a,b);
    return 0;
}