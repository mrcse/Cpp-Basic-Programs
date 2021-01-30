#include <iostream>

using namespace std;

int main()
{
    int myarray[10],a=0;
    cout<<"Enter Array element : \n";
    for(int i=0;i<10;i++)
        cin>>myarray[i];
    for(int i=0;i<10;++i)
        if(myarray[i]==5)
        a++;
    cout<<"\"5\" is repeated  "<<a<<"  times in this array\n\n";
    return 0;
}
