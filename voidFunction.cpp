//
// Created by Ravis Rank Willix on 9/28/26.
//
#include <iostream>

using namespace std;
void grader(int score) {
    switch (score ) {
        case 9000  ... 10000:
            cout<<"A";
            break;
        case 8000  ... 8999:
            cout<<"B";
            break;
        case 7000  ... 7999:
            cout<<"C";
            break;
        case 6000  ... 6999:
            cout<<"D";
            break;
        case 0  ... 5999:
            cout<<"F";
            break;

        default: grader(score);
    }
}
int main() {
    int score;
    cout<<"Enter Score: ";
    cin>>score;
    grader(score*100);
    return 0;
}