#include <stdio.h>
#include<conio.h>
void main() 
{
int a,b,i;
int count=0;
scanf("%d,%d",&b,&a);
for(i=b+1;i<=a;i++)
{
 if(i%2==0)
 {
   printf("%d",i);
  }
 }
}
