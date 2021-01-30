#include <iostream>

using namespace std;

int main()
{
    int num,r;
    cin>>num;
    for(int i=2;i<num;i++)
    {
        r=num%i;
        if(r==0)
        {
         cout<<"composit number";
         return 0;
        }
    }
    cout << "prime number" << endl;
    return 0;
}
