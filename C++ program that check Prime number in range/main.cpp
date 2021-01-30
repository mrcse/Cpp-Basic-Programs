#include<iostream>

using namespace std;

int main()
{
   int num, i, j = 0;
   cout << "Enter number: ";
   cin >> num;
   if (num>=1 && num<=300)
   {
       for (i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            j++;
        }
    }
    if (j == 2)
        cout << "\nYou entered a prime number which is = "<<num<<endl;
    else
        cout <<"\n You entered  composite number which is = "<<num<<endl;
   }
   else
    cout<<"invalid entry try again next time........!!!!!\n\n";

   return 0;
}
