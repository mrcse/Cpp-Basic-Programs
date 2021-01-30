#include <iostream>

using namespace std;
int mode(int a[],int x)
{
    int temp;
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
        if(a[i+j]==a[j])
         temp=a[j];
    return temp;
}
int main()
{
    int x;
    float sum=0.0;
    cout<<"Enter array size : ";
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
    cout<<"\nMean of  This Array is : "<<sum/x;
    if(x%2)
        cout<<"\nMedian of this Array is : "<<a[x/2];
    else
        cout<<"\nMedian of this Array are : "<<a[x/2]<<" and "<<a[(x/2)-1];
    cout<<"\nThe MODE of this Array is : "<<mode(a,x);
    return 0;
}
