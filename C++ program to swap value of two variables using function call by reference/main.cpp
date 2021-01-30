/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;
void myswap(int &x,int &y)
{
    //assignments of values
    x=x+y;
    y=x-y;
    x=x-y;
}
int main() //The main part of the program which have to be run
{
    int x,y; //Declaration of integer
    cout<<"Enter two integer for swapping "<<endl;
    cin>>x>>y; //taking values from the user
    cout<<"Before Swap x = "<<x<<endl;
    cout<<"Before Swap y = "<<y<<endl;
    myswap(x,y);
    cout<<"Without  After Swap x = "<<x<<endl;
    cout<<"Without  After Swap y = "<<y<<endl;
    return 0;
    //program end
}
