#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void ScaledLine(int x1, int y1,int x2, int y2, int Sx, int Sy)
{
 x1=x1*Sx;
 y1=y1*Sy;
 x2=x2*Sx;
 y2=y2*Sy;
 cout<<"Coordinates after scaling are "<<x1<<" "<<y1<<" "<<x2<<" "<<y2;

 x1+=90;
 y1+=90;
 x2+=90;
 y2+=90;
 setcolor(RED);
 line(x1,y1,x2,y2);
}

void main()
{
 int gd=DETECT, gm,x1,x2,y1,y2,Sx,Sy;
 initgraph(&gd, &gm, "..\\BGI");
 cout<<"Enter 2 coordinates of a line";
 cin>>x1>>y1>>x2>>y2;
 cout<<"Enter the Scaling factors for x and y";
 cin >> Sx>> Sy;
 line(x1,y1,x2,y2);
 ScaledLine(x1,y1,x2,y2,Sx,Sy);
 getch();
 closegraph();
}
