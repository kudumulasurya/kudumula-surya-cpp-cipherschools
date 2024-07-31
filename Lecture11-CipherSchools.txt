/*
ii) While loop:- 
          while(condition)
          {
                //body
          }
*/

//1. Print numbers 1 to 100 using while loop

#include<iostream>
using namespace std;

int main()
{
    int i = 1;              //initialization
    while(i<101)            //condition
    {
        cout<<i<<" ";       //loop
        i++;                //update
    }
    return 0;
}

/*

//Break statement:- 

//2. User has 100 chances to guess the number 65

#include<iostream>
using namespace std;

int main()
{
    // User has 100 chances to guess the number 65
    int i,input;

    for(i=1;i<101;i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>>input;
        if(input==65)       //only takes place if the input is exactly 65
        {
            cout<<"Congrats you have guessed it correct";
            break;
        }
    }
    return 0;
}

//3. User has 100 chances to guess the number 65 (Tried something extra)

#include<iostream>
using namespace std;

int main()
{
    int i,input;

    for(i=1;i<101;i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>>input;
        if(input==65)       //only takes place if the input is exactly 65
        {
            cout<<"Congrats you have guessed it correct";
            break;
        }
        else
        {
            cout<<"Wrong input try again "<<(100-i)<<" moves left"<<endl;        //if input is other than 65 then print wrong input and also print the remaining moves left
        }
    }
}
