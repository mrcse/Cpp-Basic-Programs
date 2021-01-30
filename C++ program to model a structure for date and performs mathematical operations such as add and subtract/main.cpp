#include <iostream>

using namespace std;
struct date
{
    int dd;
    int mm;
    int yy;
};
void input(date *D)
{
    cout<<" dd /  mm  / yy \n";
    cin>>D->dd>>D->mm>>D->yy;
}
date sum(date D1,date D2)
{
    date s;
    s.dd=D1.dd+D2.dd;
    s.mm=D1.mm+D2.mm;
    s.yy=D1.yy+D2.yy;
    if(s.dd>=31)
    {
        s.mm++;
        s.dd-=31;
    }
    if(s.mm>=12)
    {
        s.yy++;
        s.mm-=12;
    }
    return s;
}
date difference(date D1, date D2)
{
    date d;
    d.dd=D1.dd-D2.dd;
    d.mm=D1.mm-D2.mm;
    d.yy=D1.yy-D2.yy;
    if(d.dd<=0)
    {
        d.mm--;
        d.dd+=31;
    }
    if(d.mm<=0)
    {
        d.yy--;
        d.mm+=12;
    }
    return d;
}
void display(date x)
{
    cout<<"Your New date is : \n";
    cout<<" dd /  mm  / yy \n";
    cout<<x.dd<<"  "<<x.mm<<"  "<<x.yy<<endl;

}
int main()
{
    date D1,D2;
    input(&D1);
    input(&D2);
    display(sum(D1,D2));
    display(difference(D1,D2));
    return 0;
}
