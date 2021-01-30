#include <iostream>

using namespace std;

int main()
{
    int fstarry[10],scndarry[10],sum[10];
    cout<<"Enter element of First Array : \n";
    for(int i=0;i<10;++i)
        cin>>fstarry[i];
    cout<<"Enter element of Second Array : \n";
    for(int i=0;i<10;++i)
        cin>>scndarry[i];
    for(int i=0;i<10;++i)
        sum[i]=fstarry[i]+scndarry[i];
    cout<<"Sum of arrays (element by element) : \n";
    for(int i=0;i<10;++i)
        cout<<sum[i]<<"    ";
    return 0;
}
