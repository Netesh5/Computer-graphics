#include<stdio.h>
#include<graphics.h>
int main(){
	int x1,y1,x2,y2,p0,m;
	int gd=DETECT,gm;
	initwindow(getmaxwidth()/2,getmaxheight());
	printf("Enter the staring point : ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the ending point : ");
	scanf("%d%d",&x2,&y2);
    int dx=x2-x1;
    int dy=y2-y1;
    m=dy/dx;
    if(m>0){
        if(abs(m)>1){
            p0=2*dx-dy;
            while(x1!=x2 && y1!=y2){
            if(p0<0){
                x1=x1;
                y1++;
                p0+=2*dx;
            }
            else if(p0>=0){
                x1++;
                y1++;
                p0+=2*dx-2*dy;
            }
            putpixel(x1,y1,YELLOW);
            delay(10);
           }
        }
        else if(abs(m)<=1){
            p0=2*dy-dx;
            while(x1!=x2 && y1!=y2){
                if(p0<0){
                    x1++;
                    y1=y1;
                    p0+=2*dy;
                }
                else if(p0>=0){
                    x1++;
                    y1++;
                    p0+=2*dy-2*dx;
                }
                putpixel(x1,y1,YELLOW);
                delay(10);
            }
        }
    }
    else if(m<0){
        if(abs(m)>1){
            p0=2*dx-dy;
            while(x1!=x2 && y1!=y2){
                if(p0<0){
                    x1=x1;
                    y1++;
                    p0+=2*dx;
                }
                else if(p0>=0){
                    x1--;
                    y1++;
                    p0+=2*dx-2*dy;
                }
                putpixel(x1,y1,YELLOW);
                delay(10);
            }
        }
        else if(abs(m)<=1)
        {
            p0=2*dy-dx;
            while(x1!=x2 && y1!=y2){
                 if(p0<0){
                    x1--;
                    y1=y1;
                    p0+=2*dy;
                 }
                 else if(p0>=0){
                    x1--;
                    y1++;
                    p0+=2*dy-2*dx;
                 }
                 putpixel(x1,y1,YELLOW);
                 delay(10);
            }
        }
    }

//    p0=2*dy-dx;
//    putpixel(x1,y1,YELLOW);
//    while(x1<x2){
//        x1++;
//        if(p0<0){
//            p0+=2*dy;
//        }
//        else{
//            y1++;
//            p0+=2*dy-2*dx;
//        }
//        putpixel(x1,y1,YELLOW);
//        delay(10);
//    }
    getch();
}
