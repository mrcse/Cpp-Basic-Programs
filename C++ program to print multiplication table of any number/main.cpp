#include <iostream>

using namespace std;

int main()
{
    int i,multiplication,num;
    cout << "Enter an integer  : ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}
