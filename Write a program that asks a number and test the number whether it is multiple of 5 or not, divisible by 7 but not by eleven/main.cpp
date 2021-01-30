/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    int a;
    cout<<"Enter an integer and check it divisible property : ";
    cin>>a;
    if(a%5==0 && a%7==0 && a%11==0) // the number is 385
    {
        cout<<"The integer is multiple of 5 \n\n";
        cout<<"The integer is divisible by both 7 and 11 \n\n";
    }
    else if(a%5==0 && a%7==0 && !(a%11==0)) //70
    {
        cout<<"The integer is multiple of 5 \n\n";
        cout<<"The integer is divisible by 7 and not by 11\n\n";
    }
    else if(a%5==0 && !(a%7==0) && a%11==0) //55
    {
        cout<<"The integer is multiple of 5 \n\n";
        cout<<"The integer is divisible by 11 and not by 7 \n\n";
    }
    else if(!(a%5==0) && a%7==0 && a%11==0) //77
    {
        cout<<"The integer is not Multiple of 5\n\n";
        cout<<"The integer is divisible by both 7 and by 11\n\n";
    }
    else if(!(a%5==0) && !(a%7==0) && a%11==0) //22
    {
        cout<<"The integer is not Multiple of 5\n\n";
        cout<<"The integer is divisible by 11 and not by 7\n\n";
    }
    else if(!(a%5==0) && a%7==0 && !(a%11==0)) //21
    {
        cout<<"The integer is not Multiple of 5\n\n";
        cout<<"The integer is divisible by 7 and not by 11\n\n";
    }
    else if(a%5==0 && !(a%7==0) && !(a%11==0)) //22
    {
        cout<<"The integer is Multiple of 5\n\n";
        cout<<"The integer is not divisible by both 7 and 11\n\n";
    }
    else
    {
        cout<<"Invalid Entry";
    }

    return 0;
}
