#include <iostream>

using namespace std;

int main()
{
    int init,finl,i,sum=0;
    cout<<"Enter integer first  : ";
    cin>>init;
    cout<<"Enter integer second  : ";
    cin>>finl;
    for(i=init;i<=finl;i++)
    {
        if(i%2==0)
        {
            sum+=i;
            cout<<i<<"  ";
        }
    }
    cout<<"\n\nYou sum of Even number between  "<<init<<"  and  "<<finl<<"  = "<<sum<<endl;
    return 0;
}
