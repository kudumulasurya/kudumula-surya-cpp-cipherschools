#include<iostream>
using namespace std;
int main(){
    /*
    string name;
    cin>>name;
  
    for(int i=0;i<5;i++){
        cout<<name[i]<<endl;
    }
    */
    
    string a,b;
    cin>>a>>b;
    cout<<"the string you have given as input are " <<a<<" "<<b<<endl;
    string c;
    c=a+b;//concatination
    cout<<c<<endl;
    cout<<"length "<<c.length();
    //cin>>a;
    //getline(cin,a);
}
