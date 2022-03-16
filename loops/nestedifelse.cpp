#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    if(savings>10000)
    {
        if(savings==10000)
        {
            cout<<"go to taj mahal\n";
        }
        else
        {
            cout<<"go to manali\n";
        }
    }
    else if(savings>8000)
    {
        cout<<"go to hell\n";
    }
    else
    {
        cout<<"fuck off\n";
    }
    return 0;
}