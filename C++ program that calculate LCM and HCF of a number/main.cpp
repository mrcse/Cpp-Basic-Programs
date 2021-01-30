#include<iostream>
using namespace std;
int main()
{
	int num1,num2,d;
	cout<<"Enter two numbers and get LCM & HCF of numbers \n";
	cout<<endl;
	cout<<"Enter a number:";
	cin>>num1;
	cout<<"Enter a number:";
	cin>>num2;
	d=num1*num2;
	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;
		}
		else
		{
			num2=num2-num1;
		}
	}
	cout<<"\n The HCF is: "<<num1<<endl;
	cout<<"\n The LCM is :"<<d/num1;
	return 0;

}
