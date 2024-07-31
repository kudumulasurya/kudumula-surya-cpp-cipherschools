//stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>a;
    a.push(4);
    a.push(8);
    a.push(5);
    a.push(2);
    cout<<a.top()<<endl;
    
    a.pop();
    cout<<a.top()<<endl;
  
    // if(a.empty()==1){
    //     cout<<"the stack is empty";
    // }
    // else{
    //     cout<<"not empty";
    // }
 
if(a.empty()==0){
        cout<<"not  empty";
    }else
    {
        cout<<"empty";
    }
    a.pop();
    a.pop();
    a.pop();
    cout<<endl;
if(a.empty()==0){
        cout<<"not  empty";
    }else
    {
        cout<<"empty";
    }


//about queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>a;
    a.push(4);
    a.push(8);
    a.push(5);
    a.push(2);
    //fifo
    //4 8 5 2
    cout<<a.front()<<endl;
    
    a.pop();
    cout<<a.back()<<endl;
    cout<<a.front()<<endl;
}


//map
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>a;
    a.push(4);
    a.push(8);
    a.push(5);
    a.push(2);
    //fifo
    //4 8 5 2
    cout<<a.front()<<endl;
    
    a.pop();
    cout<<a.back()<<endl;
    cout<<a.front()<<endl;
}
//list
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>a;
    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_back(2);
    
    a.pop_back();
    a.pop_front();
    a.sort();
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
}
