#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char a[100],b[100],c[100];
    int p,t=0;
    cout<<"Enter First String : ";
    gets(a);
    cout<<"Enter Second String : ";
    gets(b);
    cout<<"Enter the position where the item has to be inserted : ";
    cin>>p;
    int len1 = strlen(a);
    int len2 = strlen(b);
    for(int i=0;i<=len1;i++)            // Copying the input string into another array to remove "\0"
        c[i]=a[i];
    for(int i=p,j=p+len2;i<=len1+len2;i++,j++)   // Adding the sub-string "function of i and j is to inserting the string"
    {
    char x = c[i];
    if(t<len2)
    {
        a[i] = b[t];
        t++;
    }
    a[j]=x;
    }
    cout<<"The final Result is : "<<a;
    return 0;
}
