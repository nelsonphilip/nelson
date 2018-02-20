#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0;
scanf("%d",&b);
while(b!=0)
{
  a=b%10;
  sum++;
  b=b/10;
 }
 printf("%d",sum);
 getch();
 }
