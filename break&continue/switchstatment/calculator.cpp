#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char op;

    cout<<"enter two numbers :\n";
    cin>>n1>>n2;
    cout<<"enter tthe operand:\n";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
         case '-':
        cout<<n1-n2<<endl;
        break;
         case '*':
        cout<<n1*n2<<endl;
        break;
         case '/':
        cout<<n1/n2<<endl;
        break;

        default:
        cout<<"please enter a valid operator:\n"<<endl;
    }
    return 0;
   
}