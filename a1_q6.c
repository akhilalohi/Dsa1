#include<stdio.h>
#include<conio.h>
void main()
{
    int n, temp,rem,reverse=0;
    printf("enter a number to find the reverse of it:");
        scanf("%d",&n);
        for( int temp=n;temp>0;temp/=10)
        {
            rem=temp%10;
            reverse=reverse*10+rem;
        }
    printf("the reverse of this number is: %d ",reverse);

    getch();
}
