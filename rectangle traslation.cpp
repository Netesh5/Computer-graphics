#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initwindow(getmaxwidth()/2,getmaxheight());
//    int x1=50,y1=60,x2=100,y2=120;
//    rectangle(x1,y1,x2,y2);
//    int tx1=100,ty1=120,tx2=200,ty2=240;
//    x1=x1+tx1;
//    y1=y1+ty1;
//    x2=x2+tx2;
//    y2=y2+ty2;
//    rectangle(x1,y1,x2,y2);
//    getch();
//    return 0;
    int x=100,y=200;
    int tx=50,ty=100;
    int composite[3][3]={{1,0,tx},{0,1,ty},{0,0,1}};
    int xy[3][1]={{x},{y},{1}};
    int Txy[3][1];
    putpixel(x,y,2);
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
                int sum=0;
            for(int k=0;k<=3;k++){
                sum=sum+composite[i][k]*xy[k][j];
            }
            Txy[i][j]=sum;
        }
    }
    putpixel(Txy[0][0],Txy[1][0],2);
    getch();
    return 0;
}
