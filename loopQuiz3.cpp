//
// Created by Ravis Rank Willix on 9/9/26.
//

#include <iostream>
using namespace std;
int main() {
    double sum=0;
    int i=1;
    double input;


    while (i<=5) {
        cout<<"Enter Number "<<i<<": ";
        cin>>input;
        sum=sum+input;
        i++;

    }
    cout<<"Total: "<<sum;
    return 0;
}