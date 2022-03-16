#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"enter the elements of the array:"<<endl;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int curr=0;
    for(int i=0; i<n; i++)
    {
        curr=0;
        for(int j=i; j<n;j++)
        {
            curr+=a[j];
            cout<<curr<<" ";
        }
    }
    return 0;
}