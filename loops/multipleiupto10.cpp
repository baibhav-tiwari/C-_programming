#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :\n";
    cin>>n;
    cout<<"here is your table\n";
    for(int i=1; i<11;++i)
    {
        cout<<n<<"*"<<i<<"="s<<n*i<<endl;
    }
    return 0;
}