#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],f[100000]={0};
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)f[arr[i]]++;

    for(int i=0;i<100000;i++){
        if(f[i]>0)cout<<i<<" ";
    }
}