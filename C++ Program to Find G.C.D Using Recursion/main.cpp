#include <iostream>

using namespace std;
int hcf(int a, int b)
{
    if (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
   else 
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<" HCF is : "<<hcf(a,b)<<endl;
    return 0;
}
