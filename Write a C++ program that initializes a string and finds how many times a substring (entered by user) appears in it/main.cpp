#include <iostream>
#include <stdio.h>
#include <strings.h>
using namespace std;

int main()
{
    int m=0;
    char bgstr[]={"This is my bigger string and it is c plus plus string"};
    char sbstr[30];
    cout<<bgstr<<endl;
    //gets(bgstr);
    cout<<"\n Enter Your sub-string\n";
    gets(sbstr);
    for(int i=0;bgstr[i]!='\0';i++)
    {
        int j;
        for( j=0;j<strlen(sbstr);j++)
        {
            if(bgstr[i+j]!=sbstr[j])
                break;
        }
        if(j==strlen(sbstr))
            m++;

    }
    cout<<"\nThe substring appears  "<<m<<"  times in the string.";
    return 0;
}
