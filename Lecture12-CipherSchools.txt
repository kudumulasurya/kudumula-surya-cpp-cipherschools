//1. Password Manager using While loop:- 

#include<iostream>
using namespace std;

int main()
{
    int password;
    cout<<"Enter the password: "<<endl;
    cin>>password;

    while(password<999999)
    {
        cout<<"The password does not meet the required conditions, please enter the password again."<<endl;
        cin>>password;
    }

    cout<<"The user has now entered a correct password."<<endl;
    return 0;
}

//2. Password Manager using Do-While loop:- 

#include<iostream>
using namespace std;

int main()
{
    int password;
    cout<<"Enter the password: "<<endl;
    do
    {
        cin>>password;
    }
    while(password<999999);
    cout<<"The user has now entered a correct password."<<endl;
    return 0;
}

//3. Infite loop using While loop:- 

#include<iostream>
using namespace std;

int main()
{
    while(1)
    {
        cout<<"Chocolate ";
    }
    return 0;
}

//4. Infinite loop break after count is 100:- 

#include<iostream>
using namespace std;

int main()
{
    int count=0;
    while(1)
    {
        cout<<"Chocolate ";
        count++;
        if(count>100) break;
    }
    return 0;
}

//5. Infite loop using For loop:- 

#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=0; ;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}

//6. Infinite loop break after count is 100:- 

#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=0; ;i++)
    {
        cout<<i<<" ";
        if(i>100) break;    //This statement gets executed when i is 101
    }
    return 0;
}
