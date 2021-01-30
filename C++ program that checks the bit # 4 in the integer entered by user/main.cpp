/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;

int main() //The main part of the program which have to be run
{   //start program
    int x,y; //declaration of integer
    cout<<"Enter integer and i will check the bit #4"<<endl;
    cin>>x; //taking value from the user
    y=8&x; //to check bit no 4 and (8=1000)
    y=!y;   //to flip the bit no four and then show it on screen
    cout<<"Output = "<<y;
    return 0;
    //stop programing
}
