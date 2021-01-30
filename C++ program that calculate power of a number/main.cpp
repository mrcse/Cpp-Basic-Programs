#include <iostream>

using namespace std;
int main()
{
    int x,y,result,i;
    cout<<"Enter base : ";
    cin>>x;
    cout<<"Enter Power : ";
    cin>>y;
    result=x;
    for (int i=1;i<y;i++)
    {
        result=result*x;
    }
    cout<<" Result is = "<<result<<endl;
    return 0;
}
