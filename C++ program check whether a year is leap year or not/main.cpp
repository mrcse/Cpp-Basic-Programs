/*Following program is written and compiled in Code::Blocks IDE*/
#include <iostream>  /* Library for writing the output to console window*/
int main()
{   //start program
    int year; //declaration of variables
    std::cout << "Enter a year: ";
    std::cin >> year;  //taking value from the user
    std::cout<<std::endl;
    //checking conditions for leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                std::cout << year << " is a leap year.\n\n";
            else
                std::cout << year << " is not a leap year.\n\n";
        }
        else
            std::cout << year << " is a leap year.\n\n";
    }
    else
        std::cout << year << " is not a leap year.";

    return 0;  //program successfully end
}
