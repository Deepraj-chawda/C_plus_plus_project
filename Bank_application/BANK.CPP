#include<iostream.h>
#include<conio.h>
#include<string.h>
class Bank_account{
  char nm[30],type[20];
  long accno;
  float bal;
  public :
  Bank_account(char *n1,long acn,char *ty,float b){
	      strcpy(nm,n1);
	      accno=acn;
	      strcpy(type,ty);
	      bal=b;
  }
  float deposit(){
   float amt;
   cout<<"\nEnter amount to deposit : ";
   cin>>amt;
   bal=bal+amt;
   return bal;
  }
  float withdraw(){
   float am;
   cout<<"\nEnter amount to withdraw : ";
   cin>>am;
   if(am<bal)
   bal=bal-am;
   else
   cout<<"Insufficient Balance ";
   return bal;
  }
   void display(){
    cout<<"\nName : "<<nm;
    cout<<"\nBalance : "<<bal;
   }




};
void main()
{      clrscr();
   char n[30],t[20];
  long acc;
  float balance;
   cout<<"Enter name : ";
  cin.get(n,30);
  cout<<"\nEnter Account No. : ";
  cin>>acc;
  cin.ignore(30,'\n');
  cout<<"\nEnter Account type : ";
  cin.get(t,20);
  cout<<"Enter Balance amount : ";
  cin>>balance;


	   Bank_account obj(n,acc,t,balance);
	 cout<<"\ncurrent balance : "<< obj.deposit();
	 cout<<"\ncurrent balance : "<<obj.withdraw();
	 obj.display();
       getch();
}