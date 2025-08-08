#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],k=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int f;cin>>f;
    for(int i=0;i<n;i++){
        if(arr[i]==f)k=i;
    }
    if(k>=0)cout<<"Index at: "<<k;
    else cout<<-1;
}