#include<stdio.h>
#include<conio.h>
int main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if(c=="a" || c=="e" || c=="i" || c=="o" || c=="u")
printf("vowel");
else
printf("consonant");
getch();
return 0;
}
