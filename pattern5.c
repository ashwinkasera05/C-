//any number of row and col and blank space

#include<stdio.h>
void main()
{
    int r,c,i,j,k;
    printf("enter row :");
    scanf("%d",&r);
    printf("enter col :");
    scanf("%d",&c);   
   for(i=1;i<=r;i++)
   {
       if(i==1||i==r)
       {
          for(j=1;j<=c;j++)
        {
         printf("* ");  
        }
        printf("\n");
       }
       else
       {
           for(k=1;k<=c;k++)
           {
               if(k==1||k==c)
               {
                   printf("* ");
               }
               else
               {
                   printf("  ");
               }
           }printf("\n");
       }
   }
}