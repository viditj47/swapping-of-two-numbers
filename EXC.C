#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("enter values of x,y;");
scanf("%d%d",&x,&y);
z=x;
x=y;
y=z;
printf("A=%d B=%d",x,y);
getch();
}