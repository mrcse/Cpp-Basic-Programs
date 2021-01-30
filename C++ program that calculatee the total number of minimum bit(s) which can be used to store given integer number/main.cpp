#include <iostream>
void bitscount(int);
int main()
{
    int Number;
    std::cout<<"\n Please Enter any number = ";
    std::cin>>Number;
    bitscount(Number);
    return 0;
}
void bitscount(int x)
{
    int bits=0;
    while (x)  //to find number of bits
    {
        x>>=1;  //shifting the number to right by 1 bit
        bits++;
    }
    std::cout<<"\n Number of Bits in a Given Number = "<<bits;
}

