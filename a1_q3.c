#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,count=0;
   printf("enter the number to check weather it is a prime number or not:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       if(n%i==0)
         count++;
   }
   if(count==2)
   {
    printf("this is a prime number");
   }
   else
   {
    printf("this is not a prime number");
   }

   getch();
}
