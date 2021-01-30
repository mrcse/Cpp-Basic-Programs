#include <iostream>

using namespace std;
struct time
{
    int second;
    int minute;
    int hour;
};
void input(time *T)
{
    cout<<" Hour :  Minute  : Second \n";
    cin>>(T->hour<24)?T->hour:T->hour%12>>T->minute>>T->second;
}
time sum(time T_1,time T_2)
{
    time s;
    s.second=T_1.second+T_2.second;
    s.minute=T_1.minute+T_2.minute;
    s.hour=T_1.hour+T_2.hour;
    if(s.second>=60)
    {
        s.minute++;
        s.second-=60;
    }
    if(s.minute>=60)
    {
        s.hour++;
        s.minute-=60;
    }
    return s;
}
time difference(time T_1, time T_2)
{
    time d;
    d.second=T_1.second-T_2.second;
    d.minute=T_1.minute-T_2.minute;
    d.hour=T_1.hour-T_2.hour;
    if(d.second<0)
    {
        d.minute--;
        d.second+=60;
    }
    if(d.minute<0)
    {
        d.hour--;
        d.minute+=60;
    }
    return d;
}
void display(time x)
{
    cout<<"\n\nYour New time is : \n";
    cout<<"Hour :  Minute  : Second \n";
    cout<<x.hour<<" : "<<x.minute<<" : "<<x.second<<endl;

}
int main()
{
    time T_1,T_2,Sum,Diff;
    input(&T_1);
    input(&T_2);
    display(sum(T_1,T_2));
    display(difference(T_1,T_2));
    return 0;
}
