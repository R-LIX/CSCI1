//
// Created by Ravis Rank Willix on 10/14/26.
//
#include <iostream>
#include <fstream>
using namespace std;
ifstream fileIn("input.txt");
ofstream fileOut("output.txt");
int main() {

    int i;
    fileIn>>i;
    i=i-2;
fileOut<<i;
    return 0;
}
