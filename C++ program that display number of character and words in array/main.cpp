#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int no_ch=0,no_word=0;
    char arry[50];
    gets(arry);
    for(int i=0;arry[i]!='\0';i++)
    {
        no_ch++;
        if(arry[i]==' ')
            no_word++;
    }
    cout<<"\n No. Of character is : "<<no_ch;
    cout<<"\n\n No. of Words :  "<<no_word+1;
    return 0;
}
