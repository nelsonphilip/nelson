
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,temp,b;
printf("enter the number");
scanf("%d",&b);
printf("enter the number");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<b;i++)
{
printf("%d",a[i]);
}
getch();
}
