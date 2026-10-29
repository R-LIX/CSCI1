//
// Created by Ravis Rank Willix on 9/23/26.
//

#include <iostream>

using namespace std;

double calculateUnitCost(double unit) {
    double cost;
    if (unit<=100&&unit>0) {
        cost= unit*0.5;
    } else if (unit>100) {
        cost=50+(unit-100)*0.75;
    }
    else {
        cost= 125+(unit-200)*0.75;
    }
return cost;
}
double totalCostFunction(double cost) {
    double totalCost=cost+10;
    return totalCost;
}
int main(){
    double unit;
    cout<<"Enter the unit: ";
    cin>>unit;
    cout<<"The total unit is "<<totalCostFunction(calculateUnitCost(unit));
}