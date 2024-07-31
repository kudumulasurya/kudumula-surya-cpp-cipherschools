/*
We need to give inputs as well as input type with the function.
header has return type, function name, input values.
If there is not any return type in function then the return type of the function should be void.
return  statement in a function indecates the end of a function.
Every function can return one value.
Every function can have multiple return statement.
*/

//1. First function:- 

#include<iostream>
using namespace std;

void printstuff()
{
    cout<<"Writting my first function";
}
int main()
{
    printstuff();
    return 0;
}

//2. add two numbers using function:- 

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int a,b;
    int add_sum;

    a=3;
    b=5;

    add_sum = sum(a,b);

    cout<<add_sum;

    return 0;
}
