#include <iostream>
using namespace std;


int main() {
    int number[8]={1,3,6,8,43,3,6,8};
    for (int i=0;i<=8;i++) {
        if (number[i]<number[i+1]) {
            int temp=number[i];
            number[i]=number[i+1];
            number[i]=temp;

        }

        cout<<number[i];
    }


    return 0;
}