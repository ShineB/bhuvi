#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch[20];
 clrscr();
 printf("Enter the String\n");
 gets(ch);
 printf("Reverse is:");
 printf("%s",strrev(ch));
 getch();
}
