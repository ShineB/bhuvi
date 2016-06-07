#include<stdio.h>
int main()
{
char a[10],b[10];
printf("enter a string");
gets(a);
b=strrev(a);
printf("reversed string is",b);
return 0;
}

