#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str[30];
    int len;
    cout<<"Enter Your String : \n";
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    cout<<str<<endl;
    return 0;
}
