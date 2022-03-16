#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the number of rows:\n";
    cin>>row;
    cout<<"enter the number of columns:\n";
    cin>>col;
    cout<<"here's the pattern:\n";
     for (int i=1;i<=row;i++)
     {
         for (int j=1;j<=col;j++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     return 0;
}