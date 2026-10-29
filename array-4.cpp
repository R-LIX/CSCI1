//
// Created by Ravis Rank Willix on 10/21/26.
//
//
// Created by Ravis Rank Willix on 10/21/26.
//
#include <iostream>
using namespace std;


int main() {
    int n[5] {
        50,60,70,80,90
    };
    for (int i=0;i<=4;i++) {
        cout<<n[i]<<", ";

    }
    cout<<endl;
    for (int i=0;i<=4;i++) {
        n[i]+= 5;
        cout<<n[i]<<", ";
    }
    return 0;
}
