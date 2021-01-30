/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    int a;
    cout << "Enter a number out of 7 and get Name of Day of week." << endl;
    cout<<"Enter your number here : ";
    cin>>a;
    (a==1) ? cout<<"You Entered number of Monday\n\n"    :
    (a==2) ? cout<<"You Entered number of Tuesday\n\n"   :
    (a==3) ? cout<<"You Entered number of Wednesday\n\n" :
    (a==4) ? cout<<"You Entered number of Thursday\n\n"  :
    (a==5) ? cout<<"You Entered number of Friday\n\n"    :
    (a==6) ? cout<<"You Entered number of Saturday\n\n"  :
    (a==7) ? cout<<"You Entered number of Sunday\n\n"    :
             cout<<"Invalid Entry please try again.............\n\n";
    return 0;
}
