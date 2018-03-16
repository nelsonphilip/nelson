#include<stdio.h>
#include<conio.h>
void main()
{
  int n,p;
  printf("Enter the two elements:");
  scanf("%d\t%d",&n,&p);
  n^=p;
  p^=n;
  n^=p;
  printf("After swapping %d %d",n,p);
  getch();
}
