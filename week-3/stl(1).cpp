#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    cout<<"the size of the vecotr: "<<a.size();
    int i;
    for(i=0;i<5;i++){
        a.push_back(i+1);
    }
    cout<<endl;
    cout<<"the size of the vector: "<<a.size();
    cout<<endl;
    a.pop_back();
    cout<<"the size of the vector: "<<a.size();
    cout<<endl;
    cout<<"the capcity of the vector: "<<a.capacity();
}
