/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    int a;
    cout << "Enter month number between (1-12) and get number of days in month." << endl;
    cout<<"Enter your number here : ";
    cin>>a;
    (a==1) ? cout<<"Number of days in January is : 31\n\n"  :
    (a==2) ? cout<<"Number of days in February is : 28\n\n" :
    (a==3) ? cout<<"Number of days in March is : 31\n\n"    :
    (a==4) ? cout<<"Number of days in April is : 30\n\n"    :
    (a==5) ? cout<<"Number of days in May is : 31\n\n"      :
    (a==6) ? cout<<"Number of days in Jun is : 30\n\n"      :
    (a==7) ? cout<<"Number of days in July is : 31\n\n"     :
    (a==8) ? cout<<"Number of days in August is : 31\n\n"   :
    (a==9) ? cout<<"Number of days in September is : 30\n\n":
    (a==10) ?cout<<"Number of days in October is : 31\n\n"  :
    (a==11) ?cout<<"Number of days in November is : 30\n\n" :
    (a==12) ?cout<<"Number of days in December is : 31\n\n" :
             cout<<"Invalid Entry please try again.............\n\n";
    return 0;
}
