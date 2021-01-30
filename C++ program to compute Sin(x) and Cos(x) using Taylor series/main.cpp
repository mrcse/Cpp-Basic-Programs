#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265
double  power(double a, int b)
{
    double power=1.0;
    for (int i=1;i<=b;i++)
    {
        power=power*a;
    }

    return power;
}
double fact(double x)       //factorial function
{                           //Simply calculates factorial for denominator
    double f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

double mysin(double x)      //mySin function
{
    double sum = 0.0;
    for(int i = 0; i <= 9; i++)
    {
        double top = power(-1, i) * power(x, 2 * i + 1.0);  //calculation for nominator
        double bottom = fact(2 * i + 1.0);              //calculation for denominator
        sum = sum + (top / bottom);                     //x - x^3/3! + x^5/5! - x^7/7!
    }
    return sum;
}
double mycos(double x)      //mycos function
{
    double sum = 0.0;
    for(int i = 0; i <= 9; i++)
    {
        double top = power(-1, i) * power(x, 2 * i);  //calculation for nominator
        double bottom = fact(2 * i);              //calculation for denominator
        sum = sum + (top / bottom);                     //1 - x^2/2! + x^4/4! - x^6/6!
    }
    return sum;
}
int main ()
{
  double param, result,result2,result3,result4;
  param = 30.0;		//take it as input from user
  result = sin (param*PI/180);
  result2 = mysin (param*PI/180);
  result3=cos(param*PI/180);
  result4=mycos(param*PI/180);
  cout<< "The sine of " << param <<" degree using builtin function is "<< result<<endl;
  cout<<"The sine of "<<param<<" degree using user defined function is "<< result2<<endl;
  cout<< "The cosine of " << param <<" degree using builtin function is "<< result3<<endl;
  cout<<"The cosine of "<<param<<" degree using user defined function is "<< result4<<endl;
  return 0;
}

