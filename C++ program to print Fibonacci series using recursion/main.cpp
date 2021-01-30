#include<iostream>	   // the predefined library function used for input and output.
using namespace std;   //std is the standard namespace. cout, cin etc defined in it.
void fabnauci()
{
    static int i, first, second=1, next; // Declare integers.
	if(i<=10) 			// For conditional loop.
	{
		cout<<" "<<first<<"\n";			// print first
		next = first + second;		// operator.
		first = second;				// assign the value to the prevous one
		second = next;				// assignment.
		++i;
		fabnauci();
	}
	else
	return ;
}
int main()    		   // the C++ standard requires main() to return int .
{
	fabnauci();
	return 0;
}
