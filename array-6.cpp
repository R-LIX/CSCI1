//
// Created by Ravis Rank Willix on 10/21/26.
//
#include <iostream>
using namespace std;


int main() {
    int sum=0;

    int n[5] {
    };
    for (int i=0;i<=4;i++) {
        cout<<"Enter the price no. "<<i+1<<": ";
        cin>>n[i];
    }
    for (int i=0;i<=4;i++) {

        cout<<n[i]<<", ";

    }
    cout<<"------------------------------"<<endl;
    for (int i=0;i<4;i+=2) {
        sum = sum+n[i]+n[i+1];
    }
    cout<<sum<<endl;
    double average=sum/5;
    cout<< average<<endl;


    return 0;
}