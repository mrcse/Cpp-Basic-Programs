#include <iostream>

using namespace std;

bool cal(int *a,int *b)
{
    int flag=0,i,j;
    for( i=0;i<3;i++)
    for( j=0;j<5;j++)
        if(*(b+i)==*(a+j))
           flag++;
    if(flag==3)
        return true;
    else
        return false;
}
void input(int*arry,int*subset)
{
    cout<<"Enter Array : \n";
    for(int i=0;i<5;i++)
        cin>>*(arry+i);
    cout<<"Enter Subset Array : \n";
    for(int i=0;i<3;i++)
        cin>>*(subset+i);
}
int main()
{
    int arry[5],subset[3];
    input(arry,subset);
    if(cal(arry,subset))
        cout<<"Yes!! Your second array is a subset\n";
    else
        cout<<"No!! Your second is not a subset\n";
    return 0;
}
