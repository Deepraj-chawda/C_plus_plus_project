#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{      clrscr();
  int h,m,s;
  cout<<"enter hours : ";
  cin>>h;
  cout<<"enter minute : ";
  cin>>m;
  cout<<"enter second : ";
  cin>>s;

  while(!kbhit())
  {    clrscr();
     cout<<"\t\t\t"<< h<<" : " <<m<<" : " <<s ;
     if(s==60)
     {  s=0;
	m++;
     }
     if(m==60)
     {  m=0;
	h++;
     }
     if(h==12)
     {  s=0;
	m=0;
	h=0;
     }
       delay(1000);
       s++;
  }

     getch();

}