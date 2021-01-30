#include <iostream>

using namespace std;
int factorial(int a)  //factorial function deffinition
{
    int fact=1;
    for (int i = 1; i <= a; i++)
    {
        fact *=i;
    }
    return fact;
}
int main()
{
    int x;
    cout<<"Enter a number and get its factorial!!!!\n";
    cout<<"Enter an integer : ";
    cin>>x;
    for (int i=x ;i>=0 ;i--)
    {
        cout<<"Factorial of  "<< x<< " is "<<factorial(x)<<endl;
        x--;
    }
    return 0;
}
