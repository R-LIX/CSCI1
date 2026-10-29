//
// Created by Ravis Rank Willix on 9/14/26.
//
#include<iostream>
#include <cmath>

using namespace std;
int main() {
    double s1,s2;
    cout<<"1.A square has an area of 81 square meters. Find the length of one side."<<endl;
    cout<<"Enter first side of the triangle: ";
    cin>>s1;
    cout<<"Enter second side of the triangle: ";
    cin>>s2;


    cout<<sqrt(pow(s1,2)+pow(s2,2));
    return 0;
}