/*Following code is written and compiled in Code::Blocks IDE*/
#include <iostream>/* library for writing the output to console window*/
int main() //The main part of the program which have to be run
{
    int num,h,t,u;  //declaration of variables
    std::cout << "Enter three digit number : ";
    std::cin>>num;  //taking values from the user
    u=num%10;  //calculating unit
    t=(num/10)%10;   //calculating tens
    h=num/100;    //calculating hundreds
    if((h*h*h)+(t*t*t)+(u*u*u)==num)
    {
        std::cout<<h<<"^3 + "<<t<<"^3 + "<<u<<"^3  = "<<num;
        std::cout<<"\n\n The number is an Armstrong number \n\n";
    }
    else
    {
        std::cout<<h<<"^3 + "<<t<<"^3 + "<<u<<"^3  != "<<num;
        std::cout<<"\n\n The number is not Armstrong number \n\n";
    }

    return 0;   // program  successfully end
}
