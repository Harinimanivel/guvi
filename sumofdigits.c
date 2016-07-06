#include<stdio.h>
#include<conio.h>
int main()
{
 int num,count=0,digit;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d",&num);
 while(num>0)
 {
	digit=num%10;
	count=count+1;
	num=num/10;
 }
 printf("\n%d",count);
 getch();
 return 0;
}
