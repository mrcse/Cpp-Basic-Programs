#include <iostream>
int main()
{
    int num,i,s=0,r,n=0;  //declaration of variables
    std::cout << "Enter an Integer and get Reverse of it!!!!" << std::endl;
    std::cin>>num;
    i=num;
    while(i!=0)
    {
        r=i%10;    //to find unit of the number
        s+=r;      //to sum the digits
        n=n*10+r;  //add the unit to the third variable
        i=i/10;    //i decrement by division of 10
    }
    if(num == n)
        std::cout<<"The Number is Palindrome"<<std::endl;
    else
        std::cout<<"The Number is not a Palindrome"<<std::endl;
    std::cout<<"The reversed of your integer = "<<n<<std::endl;
    std::cout<<"The Sum of the given digits  = "<<s<<std::endl;
    return 0;
}
