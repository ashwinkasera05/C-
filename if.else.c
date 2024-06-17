#include<stdio.h>
void main()
{
    int roll_no,per;
     printf("enter a roll_no of student : ");
     scanf("%d",&roll_no);

    printf("enter a percentage of student : ");
     scanf("%d",&per);
   
    if(75<=per)
    {
        printf(" A grade student");
    }
    else if(60<=75)
    {
        printf(" B grade student ");;
    }
    else if(60<50)
    {
        printf(" C grade student ");
    }
    else if(50<40)
    {
        printf(" D grade student ");
    }
    else
    {
        printf("this student are fail");
    }

}