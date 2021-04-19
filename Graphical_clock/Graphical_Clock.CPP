#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
void main()
{
   while(!kbhit())
   {
     int gd=0,gm;
   initgraph(&gd,&gm,"C://TC//BGI");


   int hx[12]={50,87,100,87,50,0,-50,-87,-100,-87,-50,0};
   int hy[12]={-87,-50,0,50,87,100,87,50,0,-50,-87,-100};

   int msx[60]={0,18,35,53,69,85,100
   ,114,126,138,147,155,162,166,169,
   170,169,166,162,155,147,138,126,144
   ,100,85,69,53,35,18,0,-18,-35,-53,-69,-85,-100
   ,-114,-126,-138,-147,-155,-162,-166,-169,-170,
   -169,-166,-162,-155,-147,-138,-126,-114,
   -100,-85,-69,-53,-35,-18};

   int msy[60]={-170,-169,-166,-162,-155,-147,
   -138,-126,-114,-100,-85,-69,-53,
   -35,-18,0,18,35,53,69,85,100,114,
   126,138,147,155,162,166,169,170,169,166,162,
   155,147,138,126,114,100,85,69,53,35,18,
   0,-18,-35,-53,-69,-85,-100,-114,-126,
   -138,-147,-155,-162,-166,-169};

   time_t t;
   struct tm*curtime;
   char a[100];

    t=time(NULL);
    curtime=localtime(&t);
    int IMS;

   int midx=getmaxx()/2;
   int midy=getmaxy()/2;

   setcolor(WHITE);
//   setbkcolor(WHITE);
   circle(midx,midy,200);

   setcolor(4);
   circle(midx,midy,204);
      setcolor(3);
   circle(midx,midy,208);


   settextstyle(2,0,7);
   setcolor(WHITE);
  outtextxy(midx+95-10,midy-165-10,"1");
   outtextxy(midx+165-10,midy-95-10,"2");
    outtextxy(midx+190-10,midy+0-5,"3");
     outtextxy(midx+165-11,midy+95-11,"4");
      outtextxy(midx+95-15,midy+165-15,"5");
      outtextxy(midx+0-15,midy+190-15,"6");
       outtextxy(midx-95-10,midy+165-17,"7");
	 outtextxy(midx-165-8,midy+95-20,"8");
	outtextxy(midx-190-4,midy+0-5,"9");
	 outtextxy(midx-165-5,midy-95-5,"10");
	   outtextxy(midx-95-7,midy-165-7,"11");
	   outtextxy(midx+0-10,midy-190-10,"12");
	   char str[100];

	    settextstyle(4,0,5);
	   outtextxy(250,0,"Deepraj");

		     strftime(str,100,"%I : %M : %S",curtime);
	   printf("%s",str);
	   strftime(a,100,"%I",curtime);
	   sscanf(a,"%d",&IMS);
	   setcolor(RED);
	   line(midx,midy,midx+hx[IMS-1],midy+hy[IMS-1]);

	   strftime(a,100,"%M",curtime);
	   sscanf(a,"%d",&IMS);
	   setcolor(GREEN);
	   line(midx,midy,midx+msx[IMS],midy+msy[IMS]);

	   strftime(a,100,"%S",curtime);
	   sscanf(a,"%d",&IMS);
	   setcolor(YELLOW);
	   line(midx,midy,midx+msx[IMS],midy+msy[IMS]);

		  delay(1000);
	clrscr();

       cleardevice();

       clrscr();

       }

}