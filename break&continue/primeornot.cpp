#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number you want to check:\n";
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"not a prime"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"prime number"<<endl;
    }
    return 0;
}