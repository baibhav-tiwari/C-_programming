#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    cout<<"enter the elements of the array:"<<endl;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}