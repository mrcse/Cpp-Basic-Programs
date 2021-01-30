#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=0,e=0,i=0,o=0,u=0,no_const=0;
    char arry[100];
    cout<<"Enter any sentence : \n";
    gets(arry);
    for(int j=0;arry[j]!='\0';j++)
        switch(arry[j])
        {
            case 'a': a++;break;
            case 'e': e++;break;
            case 'i': i++;break;
            case 'o': o++;break;
            case 'u': u++;break;
            default : no_const++;
        }
    cout<<"\n Frequency of a : "<<a;
    cout<<"\n Frequency of e : "<<e;
    cout<<"\n Frequency of i : "<<i;
    cout<<"\n Frequency of o : "<<o;
    cout<<"\n Frequency of u : "<<u;
    cout<<"\n\nTotal count of consonant  :  "<<no_const;
    return 0;
}
