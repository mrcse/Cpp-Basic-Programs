#include<iostream>

using namespace std;
void devisor(int);
int main()
{
    int num,sum=0;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            sum+=i;
        }

    }
    cout<<endl;
    if(sum==num)
    {
        cout<<"The integer is perfect and the devisor are :  \n";
        devisor(num);
        cout<<" = "<<sum<<endl;
    }

    else
        cout<<"The number is not perfect number \n";

    return 0;
}

void devisor (int a)
{
    for (int i=1 ;i<a; i++)
    {
        if(a%i==0 && i<a/2)
            cout<<i<<" + ";
        else if(i==a/2)
            cout<<i;
    }
}
/*#include <iostream>
#include <cmath> //for pow function
using namespace std;

bool isPrime(int n) //check prime number
{
    bool flag = true;
    if(n<2)
        flag = false;
    else if(n == 2)
        flag = true;
    else if(n%2 ==0)
        flag = false;
    else
    {
        for(int i=3;i<n;i+=2)
        {
            if(n%i == 0)
            {
                flag = false;
                break;
            }
        }

    }
       return flag; //return boolean value
}

/*
using above formula we made function which return the perfect number according to given prime number.
*/
/*int getPerfectNumber(int n)
{
    return (pow(2,n-1)*(pow(2,n)-1));
}


int main()
{
    //print for prime number = 2
    cout << getPerfectNumber(2)<<endl;
    for(int i =3,j=1;j<5;i+=2){
        if(isPrime(i)){ //check prime if found then will print perfect number
                cout << getPerfectNumber(i)<<endl;
   j++;
 }
    }
  return 0;

}*/
