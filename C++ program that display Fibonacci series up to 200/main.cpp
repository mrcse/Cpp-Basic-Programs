/* C++ Program - Fibonacci series */
#include<iostream>	   // the predefined library function used for input and output.
using namespace std;   //std is the standard namespace. cout, cin etc defined in it.
int main()    		   // the C++ standard requires main() to return int .
{
	int i, first=0, second=1, next; // Declare integers.

	cout<<"Fibonacci series are: \n";   // print "Fibonacci series are:" on the screen.

	for(i=0; i<=15; i++) 			// For conditional loop.
	{
		cout<<" "<<first<<",";			// print first
		next = first + second;		// operator.
		first = second;				// assign the value to the prevous one
		second = next;				// assignment.
	}
	return 0;		// program run successfully and closed.
}
