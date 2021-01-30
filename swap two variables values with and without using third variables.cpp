/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;

int main() //The main part of the program which have to be run
{
    int x,y; //Declaration of integer
    cout<<"Enter two integer for swapping without third variable"<<endl;
    cin>>x>>y; //taking values from the user
    cout<<"Before Swap x = "<<x<<endl;
    cout<<"Before Swap y = "<<y<<endl;
    //assignments of values
    x=x+y;
    y=x-y;
    x=x-y;
    //following are the console output
    cout<<"Without third variable After Swap x = "<<x<<endl;
    cout<<"Without third vsriable After Swap y = "<<y<<endl;
    return 0;
    //program end
}
