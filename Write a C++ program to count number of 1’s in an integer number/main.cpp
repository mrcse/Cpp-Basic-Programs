#include <iostream>

using namespace std;
int bits(int);
int main()
{
    int x;
    cout<<"Enter integer : ";
    cin>>x;
    int b_s=bits(x);
    cout<<"number of 1's is = "<<b_s<<endl;
    return 0;
}
int bits(int a)
{
    int no1=0,num;
    while(a!=0)
    {
        num=a&1;
        if(num==1)
            no1++;
        a>>=1;
    }
    return no1;
}
