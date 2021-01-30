#include <iostream>

using namespace std;

int main()
{
    int num,i,fac=1;
    cout << "Enter integer and get factorial : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    cout<<"Your factorial  =  "<<fac<<endl;
    return 0;
}
