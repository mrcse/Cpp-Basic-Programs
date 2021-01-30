#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,x,d;
    float r1,r2;
    cout << " ax^2 + bx + c = 0"<<endl;
    cout<<"Enter value of a, b, and c respectively : "<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    {
        cout<<"There are two roots !!!\n";
        r1=(-b+sqrt(d))/2*a;
        cout<<"Root no-1 = "<<r1<<endl;
        r2=(-b-sqrt(d))/2*a;
        cout<<"Root no-2 = "<<r2<<endl;
    }
    else if(d<0)
    {
        cout<<"Roots are are real and imaginary !!!\n";
        r1=-b/2*a;
        cout<<"The real root is  = "<<r1<<endl;
        r2=sqrt(-d)/2*a;
        cout<<"The imaginary root is = "<<r2<<endl;
    }
    else
    {
        r1=-b/2*a;
        cout<<"Both roots are equal which is = "<<r1<<endl;
    }
    return 0;
}
