#include <iostream>

using namespace std;

int main()
{
    int num,i;
    cout<<"Enter an integer and get the natural number \n in reverse oreder\n";
    cout<<"Enter integer  : ";
    cin>>num;
    for(i=num;i>=1;i--)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    return 0;
}
