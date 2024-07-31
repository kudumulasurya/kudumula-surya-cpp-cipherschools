#include<iostream>
using namespace std;
int main(){
    // char j,i,y,a;
    // cin>>j>>i>>y>>a;
    // cout<<"name "<<j<<i<<y<<a;
    /*
    char name[5];
    for (int i=0;i<5;i++){
        cin>>name[i];
    }
    cout<<"name your entred:";
    for (int i=0;i<5;i++){
        
        cout<<name[i];
    }
    */
    char name[1000];
    cout<<"entre your name(entre # at name end):"<<endl;
    int i=0;
    while(1){
        
        cin>>name[i];
        if(name[i]=='#')break;
     
        i++;
    }
    i=0;
    cout<<"entred name is :"<<endl;
    while(name[i]!='#'){
        cout<<name[i];
        i++;
    }
}

/*
string name;
cin>>name;
cout<<name;
*/
