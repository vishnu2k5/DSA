#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
printf("the number is prime");
else
printf("not primr");
getch();
}
