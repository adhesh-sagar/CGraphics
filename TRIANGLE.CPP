#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
 line(x1,y1,x2,y2);
 line(x1,y1,x3,y3);
 line(x2,y2,x3,y3);
}
void translateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int Tx, int Ty)
{
 x1=x1+Tx;
 x2=x2+Tx;
 x3=x3+Tx;
 y1=y1+Ty;
 y2=y2+Ty;
 y3=y3+Ty;
 setcolor(RED);
 DrawTriangle(x1,y1,x2,y2,x3,y3);
}

void main()
{
 int gd=DETECT, gm,x1,x2,x3,y1,y2,y3,Tx,Ty;
 initgraph(&gd, &gm, "..\\BGI");
 cout<<"Enter 3 coordinates of triangle";
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 cout<<"Enter the translation factors for x and y";
 cin >> Tx, Ty;
 DrawTriangle(x1,y1,x2,y2,x3,y3);
 translateTriangle(x1,y1,x2,y2,x3,y3,Tx,Ty);
 getch();
 closegraph();
}


