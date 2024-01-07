#include<iostream>
using namespace std;
int main()
{
int x;
bool b1=false;
bool b2=false;
bool b3=false;
bool b4=false;
bool flag0=false;
bool flag1=false;
bool flag2=false;
bool flag3=false;
bool flag4=false;
bool flag5=false;
bool flag6=false;
bool flag7=false;
bool flag8=false;
bool flag9=false;
cout<<"Enter a number between (0-9):";
cin>>x;
if(x==0){
 flag0=true;
 cout<<"0";}
 else if(x==1){
 flag1=true;
       b4=true;
       switch(b4)
       {
       case 1:
       cout<<"1\n";
       break;}
       }
 else if(x==2){
  flag2=true;
   b3=true;
   switch(b3)
   {  case 1:
   cout<<"2\n";
   break;
 }
 }
 else if(x==3){
 flag3=true;
 b3=true;
 b4=true;
 cout<<"3\n";}
 else if(x==4){
 flag4=true;
 b2=true;
 switch(b2)
   {  case 1:
   cout<<"4\n";
   break;}
   }
 else if(x==5){
 flag5=true;
 b2=true;
 b4=true;
 cout<<"5\n";}
 else if(x==6){
 flag6=true;
 b2=true;
 b3=true;
 cout<<"6\n";}
 else if(x==7){
 flag7=true;
 b2=true;
 b3=true;
 b4=true;
 cout<<"7\n";}
 else if(x==8){
 flag8=true;
 b1=true;
 switch(b1){
 case 1:
 cout<<"8\n";
 break;}
 }
 else if(x==9){
 flag9=true;
 b4=true;
 b1=true;
 cout<<"9\n";}
 else{
 cout<<"invalid input, try again (0-9)";}
return 0;
}