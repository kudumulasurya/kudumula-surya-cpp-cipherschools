//1 

#include<iostream>
using namespace std;

int main()
{
    // char r,o,h,i,t;
    // cin>>r>>o>>h>>i>>t;

    char name[5];
    int i;
    for(i=0;i<5;i++)
    {
        cin>>name[i];
    }
    cout<<"The name you have just entered is : "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<name[i];
    }
}

//2 input and output a name using array of characters:- 

#include<iostream>
using namespace std;

int main()
{
    char name[1000];
    cout<<"Enter your name : (note: Enter # after the end of your name) : "<<endl;
    int i=0;      //initial value of i is 0
    while(1)
    {
        cin>>name[i];
        if(name[i]=='#')
        {
            break;
        }
        i++;        //When the name is begin entered, the value of i is increasing
    }
    cout<<"The name you have just entered is : "<<endl;

    i=0;        //Again need to change the value of i to 0 before running the second while loop
    while(name[i]!='#')
    {
        cout<<name[i];
        i++;
    }
}

//3 String:- 

#include<iostream>
using namespace std;

int main()
{
    string name;        //over here string is a new datatype and not a name so string is similar to int, float, double, char
    cin>>name;
    cout<<name;
}
