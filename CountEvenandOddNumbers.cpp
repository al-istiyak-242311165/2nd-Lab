#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],e=0,o=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)e++;
        else o++;
    }
    cout<<"Even = "<<e<<endl<<"Odd = "<<o;
}