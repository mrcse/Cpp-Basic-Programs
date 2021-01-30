#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
  char a[50];
  int x,y;
  cout<<"Enter main string : \n";
  gets(a);
  cout<<"Enter index numbers from---to where you want to delete :  \n";
  cin>>x>>y;
  for(int i=x,j=y;j<=strlen(a)+1;i++,j++)
    a[i]=a[j];
  cout<<"\n"<<a;
  return 0;
}
