#include<stdio.h>
#include<conio.h>
void main()
{
    
int n,s,p,c,i;
printf("enter the element");
scanf("%d",&n);
s=0;
p=1;
printf("%d%d",s,p);
for(i=1;i<=n;i++)
{
c=s+p;
s=p;
p=c;
printf("%d",c);
}
getch();

}
