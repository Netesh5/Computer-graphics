#include<stdio.h>
#include<graphics.h>
int main(){
	int x1,y1,r,p0,x,y;
	int gd=DETECT,gm;
	initwindow(getmaxwidth()/2,getmaxheight());
    printf("Enter the center point : ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the radius of circle :");
	scanf("%d",&r);
    p0=1-r;
    x=0;
    y=r;
    while(x<y){
            x++;
        if(p0<0){
            p0+=2*x+1;
        }
        else{
            y--;
            p0+=2*x-2*y+1;
        }
        putpixel(x+x1,y+y1,YELLOW);
        putpixel(y+y1,x+x1,YELLOW);
        putpixel(-y+y1,x+x1,YELLOW);
        putpixel(-x+x1,y+y1,YELLOW);
        putpixel(-x+x1,-y+y1,YELLOW);
        putpixel(x+x1,-y+y1,YELLOW);
        putpixel(-y+y1,x+x1,YELLOW);
        putpixel(-y+y1,-x+x1,YELLOW);
        putpixel(y+y1,-x+x1,YELLOW);



        delay(10);
    }
getch();

}
