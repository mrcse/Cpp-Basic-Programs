#include <iostream>

using namespace std;

int main()
{
    int myarry[10];
    float sum=0.0;
    cout<<"Enter Array element : \n";
    for(int i=0;i<10;++i)
        cin>>myarry[i];
    for(int i=0;i<10;++i)
        sum+=myarry[i];
    cout<<"Average of Array element is : "<<sum/10<<endl;
    return 0;
}
