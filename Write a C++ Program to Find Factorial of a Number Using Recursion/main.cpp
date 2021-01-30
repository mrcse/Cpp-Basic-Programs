#include <iostream>

using namespace std;
int factorail(int x)
{
    if(x==0)
        return 1;
    else
        return x*factorail(x-1);
}
int main()
{
    int num;
    cout<<"Enter an integer : ";
    cin>>num;
    cout<<"Factorial is : "<<factorail(num);
    return 0;
}
