//
// Created by Ravis Rank Willix on 9/2/26.
//
#include <iostream> // Header for input/output functions
using namespace std;
int main (){
    int hours;
    double rate;
    cout<<"Enter the numbers of hour(s) you have complete work this week: ";
    cin>>hours;
    if (hours<=0) {
        cout<<"You have been absent for the whole week!"<<endl;
    }else {
        cout<<"Enter the rate of your wage: ";
        cin>>rate;
        if (rate<=0) {
            cout<<"Invalid";
        }else {
            if (hours>0&&hours<=40) {
                cout<<"Regular pay: $"<<hours*rate;
            }else{
                cout<<"Regular pay: $"<<(hours-40)*rate*1.5<<endl;
                cout<<"Overtime pay: $"<<40*rate<<endl;
                cout<<"Total pay: $"<<(hours-40)*rate*1.5+40*rate;
            }
        }

    }

    return 0;
}