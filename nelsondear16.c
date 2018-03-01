include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
printf("enter value of a");
scanf("%d",&a);
for(i=5;i<50;i++)
{
if(i%5==0)
{
printf("numbers are %d",i);
}
}
getch();
}
