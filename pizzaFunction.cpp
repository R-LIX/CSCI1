//
// Created by Ravis Rank Willix on 9/14/26.
// Calculate the Area of a Rectangle Using a Function
#include <iostream>
#include <cmath>
using namespace std;
double calculateUnitPrice(double diameter, double price) {
    double radius =diameter/2;
    double area = pow(radius,2) * 3.14;
    double pricepersquareUnit= price/area;
    return pricepersquareUnit;
}
// int main() {
//     double diameter, price;
//
//         cout<<"Enter diameter: ";
//         cin>>diameter;
//         cout<<"Enter price: $";
//         cin>>price;
//         cout<<"The Unit Price = $"<<calculateUnitPrice(diameter,price);
//
//     return 0;
// }

int main() {
    double meal_price, tips_rate, total, each_pay, tax;
    int  number_of_people;

    cout<<"Enter meal price: $";
    cin>>meal_price;
    cout<<"Enter tip rate: ";
    cin>>tips_rate;
    cout<<"Enter number of people: ";
    cin>>number_of_people;

    cout<<"The total bill to pay is "<<total<<endl<<"The individual bill is"<<each_pay;
    return 0;
}