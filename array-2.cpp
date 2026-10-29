//
// Created by Ravis Rank Willix on 10/19/26.
//
#include <iostream>
#include <fstream>
using namespace std;


int main() {
string grade[4]={"A","B","C","D"};
  for (int i=0;i<4;i++) {
    cout<<grade[i]<<endl;
  }
  grade[2]="A";
  for (int i=0;i<4;i++) {
    cout<<grade[i]<<endl;
  }
  return 0;
    }
