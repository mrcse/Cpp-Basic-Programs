/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;

int main() //The main part of the program which have to be run
{   //start program
    int x,y; //integer declaration
    cout<<"Enter integer and i will flip the bit#3"<<endl;
    cin>>x; //taking value from user
    y=4^x; //to flip integer  no 3
    cout<<"Your new integer = "<<y;
    return 0;
    //stop programing
}
