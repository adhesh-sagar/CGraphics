#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main(){
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\BGI");
 rectangle(150,180,250,300);
 rectangle(250,180,420,300);
 rectangle(180,250,220,300);

 line(200,100,150,180);
 line(200,100,250,180);
 line(200,100,360,100);
 line(370,100,420,180);
 moveto(250,330);
 outtext("This is a hut");


 getch();
 closegraph();
 }