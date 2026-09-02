//
// Created by Ravis Rank Willix on 9/2/26.
//
//
// Created by Ravis Rank Willix on 9/2/26.
//
#include <iostream> // Header for input/output functions
using namespace std;
int main (){
    int hours;

    cout<<endl<<"Enter the numbers of hour(s) you have complete work this week: ";

        try{
            cin>>hours;
            if (hours<=0) {
                throw invalid_argument("Negative numbers and 0 are not allowed!");

            }
        }catch (const invalid_argument&e) {
            cout<<e.what();
            main();

        }


    return 0;
}