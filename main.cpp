#include <iostream> // Header for input/output functions
using namespace std;
int addition(int a,int b){
    return a+b;
}
int subtation(int a,int b){
    return a-b;
}
int multiplication(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int main() {

    cout <<"Input a: "<< endl;
    int a;
    cin >> a;
    cout <<"Input b: "<< endl;
    int b;
    cin >> b;
    cout << addition(a,b);
    return 0; // Signals successful execution
}
