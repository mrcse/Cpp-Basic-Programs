#include <iostream>
#include <stdio.h>
using namespace std;

void cal(char *arry,char ch)
{
    for (int i = 0; i < 5; i++)
    {
        char temp = *(arry+i);int j;
        for(j=i-1; j >= 0 && *(arry+j) == ch;j--)
            *(arry+j + 1) = *(arry+j);
        *(arry+j + 1) = temp;
    }
}
int main()
{
    char arry[5],ch;
    cout<<"Enter array element : \n";
    gets(arry);
    cout<<"\nEnter your chber to move : ";
    cin>>ch;
    cal(arry,ch);
    cout<<arry<<endl;
    return 0;
}
