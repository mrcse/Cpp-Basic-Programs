#include <iostream>

using namespace std;

int secondlargest(int *arr)
{
    int lar,lar2;
    cout<<"Enter Array element : \n";
    for(int i=0;i<5;i++)
    {
        cin>> *(arr+i);
    }
    lar=arr[0];
    lar2=arr[0];
    for(int i=0;i<5;i++)
    {
        if(*(arr+i)>=lar)
            lar=*(arr+i);
    }
    for(int i=0;i<5;i++)
    {
        if(*(arr+i)>=lar2 && *(arr+i)<lar)
            lar2=*(arr+i);
    }
    return lar2;
}
int main()
{
    int arr[5];
    cout<<"\nSecond Largest element of entered array is : "<<secondlargest(arr)<<endl;
    return 0;
}

