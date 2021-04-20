#include <iostream>
using namespace std;
int firOcc(int arr[],int n,int p){
    //base cases
    if(n==0)
    {
        return -1;
    }
    //reccursive case
    if(arr[0]==p)
    {
        return 0;
    }
    int i=firOcc(arr+1,n-1,p);
    if(i==-1)
    {
        return -1;
    }
    return i+1;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p;
    cin>>p;
    cout<<firOcc(arr,n,p);
    return 0;
}
