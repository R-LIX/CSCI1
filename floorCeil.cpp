//
// Created by Ravis Rank Willix on 9/14/26.
/*4.Write a C++ program that asks the user to enter a decimal number.
Then display:
● the number rounded up using ceil()
● the number rounded down using floor()*/
#include<iostream>
#include <cmath>

using namespace std;
int main() {
    double x;
    cout<<"Enter : ";
    cin>>x;


    cout<<"ceil(X)"<<ceil(x)<<endl;
    cout<<"floor(X)"<<floor(x)<<endl;
    return 0;
}