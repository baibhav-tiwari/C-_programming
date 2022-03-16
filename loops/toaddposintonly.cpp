#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout << "enter the number\n";
    cin >> n;
    while (n>=0){
        sum += n;
        cout << "enter a number\n";
        cin>>n;
    }
    cout <<"\n the sum is"<<sum<<endl;
    return 0;
}
