//
// Created by Ravis Rank Willix on 10/7/26.
//
#include <iostream>


using namespace std;
class Employee {
public:
    string name;
    double salary;
    double annualSalary() {
        return salary*12;
    }
};
int main () {
    Employee person1, person2;
    person1.name ="Bellingham";
    person2.name="Steav Jobs";
    person1.salary=1000;
    person2.salary=1000;
    cout<<person1.name<<" "<<person1.annualSalary()<<endl;
    cout<<person2.name<<" "<<person2.annualSalary();
    return 0;
}