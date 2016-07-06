#include<stdio.h>
#include<conio.h>
int main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if(isalpha(c))
printf("alphabet");
else
printf("not a alphabet");
getch();
return 0;
}
