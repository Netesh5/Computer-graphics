#include<stdio.h>
#include<graphics.h>

int main(){
    int gd=DETECT,gm;
    initwindow(getmaxwidth()/2,getmaxheight());
    float x1,y1,x2,y2,dx,dy,length,x,y;
    int i;
    printf("Enter the value of x1,y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter the value of x2,y2 : ");
    scanf("%f%f",&x2,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>=dy){
        length=dx;
    }
    else{
        length=dy;
    }
    dx=dx/length;
    dy=dy/length;
    x=x1;
    y=y1;
    for(int i=1;i<=length;i++){
        putpixel(x,y,YELLOW);
        x+=dx;
        y+=dy;
        delay(10);
    }
getch();
return 0;
}
