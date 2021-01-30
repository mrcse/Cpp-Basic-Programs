/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    int num1,num2,num3; //declaration of variables
    cout<<"Enter three integer and which one is the largest \n";
    cout<<"Enter First integer : ";
    cin>>num1;                       //taking value from the user
    cout<<"Enter Second integer : ";
    cin>>num2;                      //taking value from the user
    cout<<"Enter Third integer : ";
    cin>>num3;                      //taking value from the user
    if(num1>num2 && num1>num3) //checking condition if true then execute otherwise skip this step
    {
        cout<<"Integer First is the largest which is : "<<num1<<endl;
    }
    else if(num2>num3 && num2>num1)
    {
        cout<<"Integer Second is the largest which is : "<<num2<<endl;
    }
    else if(num3>num1 && num3>num2)
    {
        cout<<"Integer Third is the largest which is : "<<num3<<endl;
    }
    else  //if anyone condition not true in the above program then execute this step
    {
        cout<<"Your number are Equals \n\n";
    }
    return 0;
    //program successfully end
}
