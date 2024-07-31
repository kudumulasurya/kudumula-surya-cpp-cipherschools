//1 
#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;

    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<endl;
    }
}

//2 

#include<iostream>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    cout<<"The strings which you have given as input are "<<a<<b;

    return 0;
}

//3 String concatenation:- 

#include<iostream>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    cout<<"The strings which you have given as input are "<<a<<b<<endl;
    string c;
    c = a + b;      //This is called string concatenation // or in simple terms string addition
    cout<<"The combined word is : "<<c<<endl;
    return 0;
}

//3 

#include<iostream>
using namespace std;
int main()
{
    //instead of using cin. You use sometime called a getline.

    string a;
    getline(cin,a);
    
    //getline is a function which iswhy you can see (), (cin, variable where you want to store the value of the line which is being taken as input).
    cout<<"Your full name is : "<<a<<endl;
}
