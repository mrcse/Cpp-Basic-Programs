#include <iostream>

using namespace std;
int myfunction (int num)
    {
        static int i=1,sum=0;
        if(i<=num)
        {
            sum=sum+i;
            ++i;
            myfunction(num);
        }
        else
            return sum;
    }
int main()
{
    int num;
    cout << "Enter an integer : ";
    cin>>num;
    cout<<myfunction(num);
    return 0;
}
