#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int x1,y1,x2,y2,dx,dy,length,i;
float x,y,xinc,yinc;
int gd=DETECT,gm;
//clrscr();
//gd=DETECT;
initgraph(&gd,&gm,"");
printf("Enter the starting coordinates");
scanf("%d%d",&x1,&y1);
printf("Enter the ending coordinates");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
length=abs(dx);
else
length=abs(dy);
xinc=dx/(float)length;
yinc=dy/(float)length;
x=x1;
y=y1;
putpixel(x,y,10);
for(i=0;i<length;i++)
{
putpixel(x,y,10);
x=x+xinc;
y=y+yinc;
delay(10);
}
getch();
closegraph();
}
