#include <iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    for(int i=0;i<n-1;i++){
        bool swapped;
        for(int j=0;j<n-i-1;j++){
            swapped=false;
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        
    if(!swapped)
        break;
    }
}
int main(){
    int a[]={18,78,68,57,1,7};
    int n= sizeof(a) / sizeof(a[0]);
    bubblesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
