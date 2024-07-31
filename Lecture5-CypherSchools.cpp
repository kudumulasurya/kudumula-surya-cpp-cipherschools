#include<iostream>
using namespace std;

//1
//int main()
//{
//    int a[4];
//    cout<<"give 5 integers as input"<<endl;
//    for(int i=0;i<5;i++){
//        cin>>a[i];
//    }
//
//    cout<<"the  5 given inputs are:"<<endl;
//    for(int i=0;i<5;i++){
//        cout<<a[i]<<" ";
//    }
//}


//2
int main()
{
    int a[10];
    cout<<"give 10 integers as input"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }

    cout<<"the  10 given inputs are:"<<endl;
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
}
