#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter a value");
scanf("%d",&a);
printf("enter a value");
scanf("%d",&b);
printf("enter a value");
scanf("%d",&c);
if(a>b && a>c)
printf("a is largest");
else if(b>a && b>c)
printf("b is largest");
else
printf("c is largest");
getch();
return 0;
}
