/*
Function is something which involve specific tasks
Divide and conquer:- Construct a program from smaller pieces or components.
Reuse:- Write once use anywhere required in the program.
Abstraction:- Hide internal details (library functions).
To improve the readability of code.
Reduces the size of the code, duplicate set of statements are replaced by function calls.
Function:- A program segment that carries out some specific, well-defined task.
A function will carry out its intended task whenever it is called or invoked.
Compiler needs to know the starting point of the program. The starting program is called main function.
Function can call other function.
Function has two parts. i) header, ii)body
        int compare(int a, int b)      //header
        {
                  //body
        }
Every function should given a output which is known as return value and the data type of return value is known as return type.
*/
//Code :-

#include<iostream>
using namespace std;

int main()      // this is a function named as main and the return type is integere
{
    cout<<"In the main function"<<endl;
    return 0;   //the main function is returning 0
}
