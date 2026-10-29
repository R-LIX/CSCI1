#include <iostream>

using namespace std;
double sum(double a, double b) {
 return a+b;
}
double findLarger(double a, double b) {
    if (a>b) {
        return a;
    }else if (a<b) {
        return b;
    }
}
string findOddEven(int a) {
    if (a%2==1) {
        return "Odd";
    }else  {
        return "Even";
    }
}
int main() {
    double a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"The sum is " <<sum(a,b)<<endl;
    if (a==b){cout<<a<<"="<<b<<endl;}else {
        cout<<"The larger number is "<<findLarger(a,b)<<endl;
    }
    cout<<"a ("<<a<<")"<<" is an "<<findOddEven(a)<<" number"<<endl;
    return 0;
}