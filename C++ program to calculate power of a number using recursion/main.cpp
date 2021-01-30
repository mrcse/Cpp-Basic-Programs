#include <iostream>

using namespace std;
int powr(int a, int b)
{
    if(b==0)
        return 1;
    else
        return a*powr(a,b-1);
}
int main()
{
    int x,y;
    cout << "Enter Base : ";
    cin>>x;
    cout<<"Enter exponent : ";
    cin>>y;
    cout<<"Result = "<<powr(x,y);
    return 0;
}
