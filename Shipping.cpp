//
// Created by Ravis Rank Willix on 8/31/26.
//
#include<iostream>

using namespace std;
int main() {
    int weight;
    cout<<"Enter weight: ";
    cin>>weight;
    if (weight<=0) {
        cout<<"weight is invalid";
    }
    else if (weight<=2) {
        cout<<"Pricing = $5.00";
    }
    else if (weight<=5) {
        cout<<"Pricing = $8.00";
    }
    else if (weight<=10) {
        cout<<"Pricing = $12.00";
    }
    else {
        cout<<"Pricing = $20.00";
    }
    return 0;
}

