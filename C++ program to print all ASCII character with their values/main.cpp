#include <iostream>

using namespace std;

int main()
{
    int i;
    char a=1;
    for(i=1;i<=255;i++)
    {
        cout<<"Character is  \" "<<a<<" \""<<" with value = "<<i;
        a++;
        cout<<endl;
    }
    return 0;
}
