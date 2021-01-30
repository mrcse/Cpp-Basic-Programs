/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/
using namespace std;//Scope in C++ that holds its own definitions for variables
int main() //main body of program
{
    int a,b,c,sum;
    cout << "Enter three Angles of a triangle and check whether triangle is valid or not." << endl;
    cout<<"Enter Angle number_1 : ";cin>>a;
    cout<<"Enter Angle number_2 : ";cin>>b;
    cout<<"Enter Angle number_3 : ";cin>>c;
    sum=a+b+c;
    (sum<=180) ? cout<<"The Angles is valid for TRIANGLE \n\n" :
    cout<<"Sorry Please try again your angle is not valid\n\n";
    return 0;
}
