// Created by Ravis Rank Willix on 8/26/26.
// The code below is a vending machine calculator which take different types of coin as input and output the total value in cents and in $.
#include <iostream>
using namespace std;


int main(){
    int quater,nickel,dimes;
    cout<<"Welcome to VendingMachine"<<endl;
    cout<<"Please only input values that are non-negative integers "<<endl;
    cout <<"Input the number of quater: ";
    cin >>quater;
    cout <<"Input the number of dimes: ";
    cin >>dimes;
    cout <<"Input the number of nickles: ";
    cin >>nickel;
    double total = (10*dimes)+(5*nickel)+(25*quater);
    cout<<"The total is "<<total<<" cents or "<<total/100<<"$ ";

    return 0;
}
