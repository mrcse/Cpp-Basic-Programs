/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    int a; //DECLARATION OF VARIABLES
    cout<<"Enter an integer and check whether it is EVEN or ODD \n";
    cout<<"Enter an integer : ";
    cin>>a; //taking values from the user
    //checking condition with ternary operator
    (a % 2 == 0) ? cout <<"Your integer is EVEN \n" :  cout <<"Your integer is ODD \n";
    return 0;
    //program is successfully end
}
