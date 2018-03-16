#include<stdio.h>
void main()
{
int a[20],i,b;
printf("ENTER THE NUMBERS ");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
b=a[1];
for(i=1;i<=10;i++)
{
if(b<a[i])
{
b=a[i];
}
}
printf("%d \n",b);
getch();
}
