#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout <<"enter the alphabet which you want to check :"<<endl;
    cin>>alpha;
    switch(alpha)
    {
        case 'a':
        cout<<"it is a vowels"<<endl;
        break;
        case 'e':
        cout<<"it is a vowels"<<endl;
        break;
        case 'i':
        cout<<"it is a vowels"<<endl;
        break;
        case 'o':
        cout<<"it is a vowels"<<endl;
        break;
        case 'u':
        cout<<"it is a vowels"<<endl;
        break;
        default:
        cout<<"it is consonat"<<endl;
        break;
    }
    return 0;
}