/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/

using namespace std;//Scope in C++ that holds its own definitions for variables

int main() //main body of program
{
    char ch;
    int vowel;
    repeat:
    cout << "Enter an Alphabet and check whether it is vowel or not" << endl;
    cout<<"Enter Alphabet : ";
    cin>>ch;
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        cout<<"Entered Alphabet is Vowel \n";
    }
    else
    {
        cout<<"Enter Alphabet is Consonant \n\n";
    }
    cout<<"If you want to test again press y otherwise enter another key : ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        goto repeat;
    }
    else
    {
        return 0;
    }
}
