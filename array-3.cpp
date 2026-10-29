//
// Created by Ravis Rank Willix on 10/21/26.
//
#include <iostream>
using namespace std;


int main() {
    int n[8] {
        1,2,3,4,5,6,7,8
    };
    for (int i=0;i<=7;i++) {
        cout<<n[i]<<", ";

    }
    cout<<endl;
    for (int i=0;i<=7;i++) {
        if (n[i]%2==0) {
            cout<<n[i]<<", ";
        }
    }
    return 0;
}
