//
// Created by Ravis Rank Willix on 10/19/26.
//
#include <iostream>
#include <fstream>
using namespace std;


int main() {

    string name;
    int i=1;
    ofstream fileOut("student.txt",ios::app);
    cout<<"File is opened"<<endl;
    while (i<=3) {

        cout<<"Enter the "<<i<<" student(s): ";
        cin>>name;
        fileOut<<name<<endl;
        cout<<" The number of student: "<<i<<endl;
  i++;

    }

    return 0;
}