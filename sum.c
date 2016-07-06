#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,ctr,num;
clrscr();
printf("enter a number");
scanf("%d",&num);
for(ctr=1;ctr<=num;ctr++)
{
sum=sum+ctr;
}
printf("%d",sum);
getch();
return 0;
}
