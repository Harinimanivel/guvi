#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter a number");
scanf("%d",&n);
if(n>0)
printf("number is positive");
else if(n<0)
printf("number is negative");
else
printf("number is zero");
getch();
return 0;
}
