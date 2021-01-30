/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;

int main() //The main part of the program which have to be run
{   //run program
    int a,b; //declaration of variables
    cout<<"Enter two integer let say 'a' and 'b'"<<endl;
    cin>>a>>b; //taking values of integer
    cout << "Before swap  value of a = "<< a <<endl;
    cout << "Before swap value of b = "<< b <<endl;
    //i used bitwise operator  to assign the values
    a = a ^ b;
    b = a ^ b; //to store the value of a in b
    a = a ^ b;  //to store the value of b in a
    //following is the required answer
    cout <<"== After Swapping ==" <<endl;
    cout << "Value of a = "<< a <<endl;
    cout << "Value of b = "<< b <<endl;
    return 0;
    //Stop program
}
