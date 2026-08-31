//
// Created by Ravis Rank Willix on 8/26/26.
//
#include<iostream>
using namespace std;
// float apple=1.25, banana=0.75, milk=2.50;
// int Aapple, Abanana, Amilk;
// int main() {
//     cout<<"How many apples do you have? ";
//     cin>>Aapple;
//     cout<<"How many bananas do you have? ";
//     cin>>Abanana;
//     cout<<"How many cartons of milk do you have? ";
//     cin>>Amilk;
//     cout<<"Total price of apple: "<<Aapple*apple<<"$"<<endl;
//     cout<<"Total price of banana: "<<Abanana*banana<<"$"<<endl;
//     cout<<"Total price of milk: "<<Amilk*milk<<"$"<<endl;
//     double Total =Aapple*apple+Abanana*banana+Amilk*milk;
//     cout<<"Grand Total price: "<<Total<<"$"<<endl;
//     return 0;
// }

// int main() {
//     int age;
//     cout<<"How old are you?"<<endl;
//     cin>> age;
//     if (age>=18) {
//         cout<<"You are an adult!";
//     }
//     else {
//         cout<<"Please wait until you are 18!"<<endl<<"wait "<<18-age<< " more Years";
//     }
//     return 0;
// }

// int main() {
//     double Score;
//     cout<<"Enter you score: ";
//     cin>>Score;
//     if (Score>100||Score<0) {
//         cout<<"invlaid Input";
//     }
//     else if (Score>=90) {
//         cout<<"A";
//     }
//     else if (Score>=80) {
//         cout<<"B";
//     }
//     else if ( Score>=70) {
//         cout<<"C";
//     }
//     else if ( Score>=60) {
//         cout<<"D";
//     }
//     else {
//         cout<<"Please meet with Professor!";
//     }
//     return 0;
// }

int main1() {
    double Score;
    cout<<"Enter you score: ";
    cin>>Score;
    if (Score>100||Score<0) {
        cout<<"invlaid Input";
    }
    else if ( Score>=60) {
        cout<<"D";
    }
    else if ( Score>=70) {
        cout<<"C";
    }
    else if (Score>=80) {
        cout<<"B";
    }
    else if (Score>=90) {
        cout<<"A";
    }


    else {
        cout<<"Please meet with Professor!";
    }
    return 0;
}