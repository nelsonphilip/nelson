#include<stdio.h>
#include<conio.h>
void main()
{
    
int a,b=0,c;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
c=a%10;
b++;
a=a/10;
}
printf("%d",b);
getch();

}
