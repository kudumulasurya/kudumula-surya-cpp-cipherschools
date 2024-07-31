//1

#include<iostream>
using namespace std;
void swap(int *x, int *y){      //a,b are different
    int c;      //x and y are the pointers to a,b --> they store the address of a and b
    c = *x;     //to get a,b from x and y we need to dereference the pointers
    *x = *y;
    *y = c;

    cout<<"The swapping is complete"<<endl;
}
int main()
{
    int a,b;

    a=3;
    b=4;

    /*int c;
    c = a;
    a = b;
    b = c;*/

    swap(&a,&b);        //passing the addresss of a and b to the function

    cout<<"The values of a and b after the swap are : a = "<<a<<" b = "<<b<<endl;

    return 0;
}

//2

#include<iostream>
using namespace std;

int main()
{
    int a[10];

    cout<<"values for comparison : "<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a[0] is "<<a[0]<<endl;
    cout<<"The value of a[1] is "<<a[1]<<endl;

    return 0;
}

//3 passing a array in function using name:- 

#include<iostream>
using namespace std;
float average(int a, float x[]){
    float sum = 0;
    for(int i=0;i<a;i++){
        sum = sum + x[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    float list[100]; 
    float avg;
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    avg = average(n,list);
    cout<<avg;
}

//4 passing a array in function using address:- 

#include<iostream>
using namespace std;
float average(int a, float *x){
    float sum = 0;
    for(int i=0;i<a;i++){
        sum = sum + x[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    float list[100]; 
    float avg;
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    avg = average(n, list);
    cout<<avg;
}
