#include <iostream>

using namespace std;

void input(int*arry)
{
    cout<<"Enter Array element : \n";
    for(int i=0;i<5;i++)
        cin>>*(arry+i);
}
void frequency(int*arry,int x)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(*(arry+i)==x)
            count++;
    }
    cout<<"\nThe frequency of "<<x<<" is : "<<count;
}
int main()
{
    int arry[5],x;
    input(arry);
    cout<<"\nEnter a number to check its frequency : ";
    cin>>x;
    frequency(arry,x);
    return 0;
}
