#include <iostream>
int main()
{
    int64_t Number,digit=0,bits=0,j;
    std::cout<<"\n Please Enter any number = ";
    std::cin>>Number;
    j=Number;
    while(j>0)  //to number of digits
    {
        digit++;
        j/=10;
    }
    while (Number)  //to find number of bits
    {
        Number>>=1;  //shifting the number to right by 1 bit
        bits++;
    }
    std::cout<<"\n Number of Bits in a Given Number = "<<bits;
    std::cout<<"\n Number of Digits in a Given Number = "<<digit;
    return 0;
}

