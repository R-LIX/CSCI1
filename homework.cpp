//
// Created by Ravis Rank Willix on 9/7/26.
//
//The Below program is a summation from 1-100 wil do-while following by the difference between while, do-while and for loops.
#include <iostream>
using namespace std;
int main() {
    int sum=0,i=1;
    do {
        sum+=i;
        i++;
    }while (i<=100);
    cout<<"The total sum from 1 to 100 is "<<sum;
    return 0;
}
/* The difference between using do-while with while and for is:
 * While and do-while are loops that can be use when the number of times is unknown;
 * do-while runs once before meeting the conditions whereas while runs only if it meets the condition.
 * int the case in the case of for loop, we use it when we know the exact amount of time it will run.
 * In the case for the above code, if we use while loop, the part sum+=i; i++; will only run if i<=100
 * whereas for do-while loop sum+=i; i++; will run first then check the conditions.
 * As for For loop, we would have to know that the programs executes 100 times given from 1-100; if we don't know the number of executions, using for loop will be a challenge.
 */