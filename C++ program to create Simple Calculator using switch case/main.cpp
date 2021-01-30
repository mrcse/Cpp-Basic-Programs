#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char ch;
    cout << "Enter an Operand first : ";
    cin>>a;
    cout << "Enter an Operator      : ";
    cin>>ch;
    cout << "Enter an Operand first : ";
    cin>>b;
    switch(ch)
    {
    case '+':
    {
        int sum=a+b;
        cout<<"\n Sum between"<<a<<" and "<<b<<"  = "<<sum;
        break;
    }
   case '-':
    {
        int mins=a-b;
        cout<<"\n Defference between"<<a<<" and "<<b<<"  = "<<mins;
        break;
    }
    case '/':
     {
        int division=a/b;
        cout<<"\n Division between"<<a<<" and "<<b<<"  = "<<division;
        break;
    }
    case '*':
    {
        int multiply=a*b;
        cout<<"\n Multiplication between"<<a<<" and "<<b<<"  = "<<multiply;
        break;
    }
    case '%':
     {
        int rem=a%b;
        cout<<"\n Modulus between"<<a<<" and "<<b<<"  = "<<rem;
        break;
     }
    case '^':
     {
        int powr=a*a;
        cout<<"\n a power a  = "<<powr;
        break;
    }
    case '&':
      {
        int AND=a&b;
        cout<<"\n "<<a<<" AND "<<b<<"  = "<<AND;
        break;
      }
    case '|':
    {
        int OR=a|b;
        cout<<"\n"<<a<<" OR "<<b<<"  = "<<OR;
        break;
    }
    }
    return 0;
}
