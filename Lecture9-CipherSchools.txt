/*Looping is something in which a similar action is repeated.
Action should be decided in every loop.
There are two loops in C++ :- i) For loop, ii) While loop.
i) For loop:-
          for(initialization; condition; update)
              {
                    //body inside for loop
              }
        initialization:- Start of the loop
        condition:- to check till what point the loop is to be executed
        update:- how the variable change after each loop
*/

//1. Print numbers 1 to 100:- 

#include<iostream>
using namespace std;

int main()
{
    int i;      //keeps the count of the number of the loop
    for(i=1;i<=100;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
