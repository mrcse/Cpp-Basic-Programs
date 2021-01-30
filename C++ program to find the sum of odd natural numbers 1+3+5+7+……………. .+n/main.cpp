#include <iostream>
int main()
{
    int num,sum=0,i=1;
    std::cout << "Enter an integer : ";
    std::cin>>num;
    while(i<=num) //repeat the while loop along the number
    {
        if(i%2!=0)  //use to find out odd integer
        {
            std::cout<<i<<" + ";
            sum=sum+i;
        }
        ++i;  //increment i means to finshed the loop as the number greater than i
    }
    std::cout<<"\n\nYour SUM of ODD Natural number up to  "<<num<<"  = "<<sum<<std::endl;
    return 0;
}
