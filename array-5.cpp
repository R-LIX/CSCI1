//
// Created by Ravis Rank Willix on 10/21/26.
//

#include <iostream>
using namespace std;


int main() {
    int n[6] {
        10,50,15,30,100,35
    };
    int j;
    for (int i=0;i<=5;i++) {
        if (n[i]>n[i+1]) {
             j=n[i];
            n[i+1]=j;


        }

        }
    cout<<j<<endl;
    for (int i=0;i<=5;i++) {
        if (n[i]<n[i+1]) {
            j=n[i];
            n[i+1]=j;


        }

    }
    cout<<j<<endl;

    return 0;
}
