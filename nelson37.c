#include<stdio.h>
#include<conio.h>
void main()
{
int s,n,p;
printf("enter two numbers");
scanf("%d%d",&s,&n);
p=s;
s=n;
n=p;
printf("%d\t%d",s,n);
getch();
}
