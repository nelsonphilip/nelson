#include <stdio.h>
#incude<conio.h>
void main() 
{
int a,b,i;
int count=0;
scanf("%d,%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
}
