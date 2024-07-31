//1. Compare two numbers using function:- 

#include<iostream>
using namespace std;

int compare(int a, int b)
{
    int c;
    if(a>b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}
int main()
{
    int a,b;
    cout<<"Value of a : "<<endl;
    cin>>a;
    cout<<"Value of b : "<<endl;
    cin>>b;
    int x = compare(a,b);
    cout<<"The larger value is : "<<x<<endl;
}

//2. Compare two  numbers using multiple return statements:- 

#include<iostream>
using namespace std;

int compare(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a,b;
    cout<<"Value of a : "<<endl;
    cin>>a;
    cout<<"Value of b : "<<endl;
    cin>>b;
    int x = compare(a,b);
    cout<<"The larger value is : "<<x<<endl;
}

//3. Guess the number 5:- 

#include<iostream>
using namespace std;

int guess_number(int a)
{
    if(a==5)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Guess a number between 1 to 10 : "<<endl;
    cin>>a;
    int x = guess_number(a);
    if(x==1)
    {
        cout<<"You guessed it correct"<<endl;
    }
    else
    {
        cout<<"You guessed it wrong"<<endl;
    }
}

//4. 

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
