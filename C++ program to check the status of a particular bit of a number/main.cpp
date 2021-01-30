#include <iostream>

using namespace std;
bool bits(int,int);
int main()
{
    int x,y;
    cout<<"Enter integer : ";
    cin>>x;
    cout<<"Enter bit number : ";
    cin>>y;
    if(bits(x,y))
        cout<<"The bit is True !!!";
    else
        cout<<"The bit is False !!!";
    return 0;
}
bool bits(int a,int b)
{
    int num;
    a>>=b-1;
    num=a&1;
    return num;
}
