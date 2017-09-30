#include<stdio.h>
#include<conio.h>
void main()
{
int year;clrscr();
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
 if(year%100==0)
{
   if(year%400==0)
{
printf("it is leap year");
}
   else
{
printf("it is not a leap year");
}
}
 else
{
printf("it is a leap year");
}
}
else
{
printf("it is not a leap year");
}
getch();
}
