#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin >> savings;
    if (savings>10000)
    {
        cout<<"go to manali\n";
    }
    else if (savings<10000)
    {
        cout<<"go to wonderland\n";
    }
    else 
    {
        cout<<"never go anywhere you bastard\n";
    }
    return 0;

}