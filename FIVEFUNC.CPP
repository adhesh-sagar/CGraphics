#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void main(){
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"..\\BGI");
 setbkcolor(3);
 putpixel(250,250,4);
 setcolor(WHITE);
 circle(250,250,50);
 cout<<getpixel(250,300);
 getch();
 closegraph();
 }