 //lec 7
#include <iostream>
using namespace std;
int main() {
    int password;
    cout<<"entre the password"<<endl;
    cin>>password;
    while(password<999999){
        cout<<"the password is not appropriate,plz change it"<<endl;
        cin>>password;
        
    }
    cout<<"the entres pass is appropriate";
    return 0;
}
 //lec 7
#include <iostream>
using namespace std;
int main() {
    int password;
    cout<<"entre passss"<<endl;
    do{
        cin>>password;
    }
    while(password>999999)
}
//lec 7
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0; ; i++){
        cout<<i<<" ";
        if(i>100)break;
    }
    return 0;
}
