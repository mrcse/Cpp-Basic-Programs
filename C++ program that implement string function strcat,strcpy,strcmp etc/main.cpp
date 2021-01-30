#include <iostream>
#include <stdio.h>
using namespace std;
bool stringcmp(char [],char []);
int stringlen(char []);
void stringcat(char [],char []);
void stringrev(char []);
void stringcpy (char [],char []);
void lower(char []);
void upper(char []);
int main()
{
    char string_1[20],string_2[10];
    cout<<"Enter first string : \n";
    gets(string_1);
    cout<<"Enter second string : \n";
    gets(string_2);
    if(stringcmp(string_1,string_2)==0)
        cout<<"\nMy string comparison function both are same\n\n";
    else
        cout<<"\nMy string comparison function both are not same\n\n";
    stringcat(string_1,string_2);
    cout<<"\nMy string cat function combined second with first  :  "<<string_1;
    stringrev(string_1);
    cout<<"\nMy string rev function  : "<<string_1;
    stringcpy(string_1,string_2);
    cout<<"\nMy string copy function  : "<<string_1;
    lower(string_1);
    cout<<"\nMy string Tolower function  : "<<string_1;
    upper(string_2);
    cout<<"\nMy string Toupper function  : "<<string_2;
    return 0;
}
bool stringcmp(char a[],char b[])
{
    bool flag=false;
    for(int i=0;a[i]!='\0';i++)
        if(a[i]==b[i])
        flag=false;
        else
        flag=true;
    return flag;
}
int stringlen(char a[])
{
    int l=0;
    for(int i=0;a[i]!='\0';i++)
        l++;
    return l;
}
void stringcat(char a[],char b[])
{
    for(int i=stringlen(a),j=0;j<=stringlen(b)+1;i++,++j)
        a[i]=b[j];
}
void stringrev(char a[])
{
    for(int i=0,j=stringlen(a)-1;i<stringlen(a)/2;i++,j--)
    {
        char temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
void stringcpy (char a[],char b[])
{
    int i;
    for(i=0;i<=stringlen(b);i++)
        a[i]=b[i];
    a[i]='\0';
}
void lower(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
    }
}
void upper(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
            a[i]=a[i]-32;
    }
}
