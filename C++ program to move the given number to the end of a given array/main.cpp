#include <iostream>

using namespace std;

void cal(int *arry,int num)
{
    for (int i = 0; i < 5; i++)
    {
        int temp = *(arry+i),j;
        for(j=i-1; j >= 0 && *(arry+j) == num;j--)
            *(arry+j + 1) = *(arry+j);
        *(arry+j + 1) = temp;
    }
}
void display(int*arry)
{
    cout<<"\nOutput is : ";
    for(int i=0;i<5;i++)
        cout<<"  "<<*(arry+i);
}
int main()
{
    int arry[5],num;
    cout<<"Enter array element : \n";
    for(int i=0;i<5;i++)
        cin>>*(arry+i);
    cout<<"\nEnter your number to move : ";
    cin>>num;
    cal(arry,num);
    display(arry);
    return 0;
}
