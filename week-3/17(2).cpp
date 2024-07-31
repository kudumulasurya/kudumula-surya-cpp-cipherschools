#include <iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
    swap(a[i],a[minindex]);
    }
}
int main(){
    int a[]={18,78,68,57,1,7};
    int n= sizeof(a) / sizeof(a[0]);
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
