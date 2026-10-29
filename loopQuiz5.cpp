//
// Created by Ravis Rank Willix on 9/9/26.
//
#include <iostream>
using namespace std;
int main() {
    int i=1, input,positiveCount=0,negativeCount=0,zeroCount=0;
    while (i<=10) {
        cout<<"Enter Number "<<i<<": ";
        cin>>input;
        if (input==0) {
            zeroCount++;
        }
        else if (input>0) {
            positiveCount++;
        }
        else if (input<0) {
            negativeCount++;
        }
        i++;

    }
    cout<<"Positive numbers= "<<positiveCount<<endl;
    cout<<"Negative numbers= "<<negativeCount<<endl;
    cout<<"Zero values= "<<zeroCount<<endl;
return 0;
}