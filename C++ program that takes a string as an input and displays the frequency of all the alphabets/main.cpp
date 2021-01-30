#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void Calculation (int frequency[],char arr [])
{
    int l=strlen(arr);
    for (int i=0;i<l;i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
            frequency[arr[i]-97]++;
        else if(arr[i]>='A' && arr[i]<='Z')
            frequency[arr[i]-65]++;
    }
}

void Display (int frequency[])
{
    for (int i=0;i<26;i++)
    {
        if (frequency[i]!=0)
        {
            char c=i+65;
            cout<<c<<" : "<<frequency[i]<<endl;
        }
    }
}
int main()
{
    char arr[30],ch;
    int frequency[26]={0};
    cout<<"Enter Your String "<<"\n";
    gets(arr);
    Calculation(frequency,arr);
    Display(frequency);
    return 0;
}
