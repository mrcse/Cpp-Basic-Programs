#include <iostream>

using namespace std;

void input(int *arry)
{
    cout<<"Enter five element of arry  : ";
    for(int i = 0; i < 5;i++ )
    {
        cout<<"\nEnter element -"<<i<<" : ";
        cin>> *(arry+i);
    }
}

void insort(int *a)
{
    for(int i =0 ; i < 5;i++)
    {
        int j,temp=*(a+i);
        for(j=i-1;j>=0 && *(a+j)>temp;j--)
        *(a+j+1)=temp;
    }
}
void delet(int *arry)
{
    int pos;
    cout<<"\nEnter the position where to delete : ";
    cin>>pos;
    for(int i=pos-1;i<5;i++)
    arry[i]=*(arry+i+1);
}
void display(int *arry)
{
    cout<<"\n The output is : ";
    for(int i=0;i<4;i++)
        cout<<"  "<<*(arry+i);
}
int main()
{
    int arry[5],i;
    input(arry);
    insort(arry);
    cout<<"\n The sorted element are : \n";
    for( i=0;i<5;i++)
        cout<<"  "<<*(arry+i);
    *(arry+i)=0;
    delet(arry);
    display(arry);
    return 0;
}
