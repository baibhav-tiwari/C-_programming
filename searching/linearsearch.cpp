#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key = 0;
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}