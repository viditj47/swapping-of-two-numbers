#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter values of x,y;");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("A=%d B=%d",x,y);
getch();
}
