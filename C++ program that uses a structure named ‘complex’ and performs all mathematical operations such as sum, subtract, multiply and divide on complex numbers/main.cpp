#include <iostream>

using namespace std;
struct complex
{
    float real;
    float imag;
};
void input(complex*c)
{
    cout<<"\nReal part : ";
    cin>>c->real;
    cout<<"Imag part : ";
    cin>>c->imag;

}
complex sum(complex c1,complex c2)
{
    complex Sum;
    Sum.real=c1.real+c2.real;
    Sum.imag=c1.imag+c2.imag;
    return Sum;
}
complex difference(complex c1,complex c2)
{
    complex d;
    d.real=c1.real-c2.real;
    d.imag=c1.imag-c2.imag;
    return d;
}
complex multiplication (complex c1,complex c2)
{
    complex m;
    m.real=c1.real*c2.real+(c1.imag*c2.imag)*(-1);
    m.imag=c1.real*c2.imag+c2.real*c1.imag;
    return m;
}
complex Division(complex c1, complex c2)
{
    complex division,conjugate=c2,upper,lower;
    conjugate.imag*=-1;
    upper=multiplication(c1,conjugate);
    lower=multiplication(c2,conjugate);
    division.real=upper.real/lower.real;
    division.imag=upper.imag/lower.real;
    return division;

}
void display(complex x)
{

    (x.imag>=0)?cout<<"Your answer is : "<<x.real<<" + "<<x.imag<<"i"<<endl:
        cout<<"Your answer is : "<<x.real<<" "<<x.imag<<"i"<<endl;
}
int main()
{
    complex c1,c2;
    cout<<"\nEnter your complex numbers : \n";
    input(&c1);
    input(&c2);
    int choice;
    cout<<"What you want to calculate (Enter 1-to-4) or 0 for end program : \n";
    cout<<"1. Sum\n2. Difference\n3. Multiplication\n4. Division\n";
    cin>>choice;
    if(choice == 0)
        return 0;
    else if(choice == 1)
            display(sum(c1,c2));
    else if(choice == 2)
            display(difference(c1,c2));
    else if(choice == 3)
            display(multiplication(c1,c2));
    else if(choice == 4)
            display(Division(c1,c2));
    main();
}
