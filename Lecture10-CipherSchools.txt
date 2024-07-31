/*There are 2 increment operator in C++ :-
i) Pre increment:- ++i  increment before we print i
ii) Post increment:- i++  increment after we print i
*/
//1. Increment Operator:-

#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    i=0;
    j=0;
    k=0;
    cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;
    j = i++;
    cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;
    k = ++i;
    cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;
}

//2. Print numbers 1 to 100 using for loop

#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<101;i++)  //called the update which happens after the interaction(part of a loop is completed)
    {
        cout<<i<<" ";
    }
    return 0;
}
