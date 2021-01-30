#include <iostream>
int main()
{
    int nOsub,i=1,CH,totalCH=0;   //declaration of variables
    char grade,sign,ch;
    float GPA,QP,totalQP=0;
    std::cout<<"Enter Number of subjects  : ";
    std::cin>>nOsub;
    do
    {
        std::cout<<"Enter Grade for subject "<<i<< " (in CAPITAL)  " <<" : ";
        std::cin>>grade;
        std::cout<<"Enter Sign with grade ( 0, +, -)  : ";
        std::cinb >>sign;
        std::cout<<"Enter Number of Credit Hours for Subject  "<<i<<"  : ";
        std::cin>>CH;
        if(grade=='A' && sign=='0')   //checking condition for grade and its sign
        {
         GPA=4;
        }
        else if (grade=='A' && sign=='-')
        {
         GPA=3.67;
        }
        else if (grade=='B' && sign=='+')
        {
         GPA=3.33;
        }
        else if (grade=='B' && sign=='0')
        {
         GPA=3.0;
        }
        else if (grade=='B' && sign=='-')
        {
         GPA=2.67;
        }
        else if (grade=='C' && sign=='+')
        {
         GPA=2.33;
        }
        else if (grade=='C' && sign=='0')
        {
         GPA=2.0;
        }
        else if (grade=='C' && sign=='-')
        {
         GPA=1.67;
        }
        else if (grade=='D' && sign=='+')
        {
         GPA=1.33;
        }
        else if (grade=='D' && sign=='0')
        {
         GPA=1.0;
        }
        else if (grade=='F' && sign=='0')
        {
         GPA=0;
        }
        else
        {
            std::cout<<"Invalid GRADE  \n\n";
        }
        totalCH=totalCH+CH;    //calculating total credit hour
        QP=CH*GPA;             //calculating quality points
        totalQP=totalQP+QP;    //total quality points
        i++;              //increment number
        if(i>nOsub)  //to get one student data
        {
            GPA=totalQP/totalCH;
            std::cout << "\nYour SGPA is  = "<<GPA<<"\n\n";
            std::cout<<"IF YOU WANT TO CALCULATE GPA FOR ANOTHER STUDENT ENTER Y OTHERWISE N\n\n";
            std::cin>>ch;
        }
        if((ch=='y' || ch=='Y') && i>nOsub)  //if user  want to calculate for another
        {
            i=1;
            std::cout<<"Enter Number of subjects : ";
            std::cin>>nOsub;
        }
    }
    while(i<=nOsub || (ch=='y' || ch=='Y'));
    //loop will continue untill user enter y or no of subject greater than i
    return 0;
}
