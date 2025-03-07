// question ➡️ wap to input electricity unit charges and calculate total electricity bill according to the given condition??
// 1 : for first 50 units rs 0.05/unit
// 2 : for next 100 units rs .75/unit
// 3 : for next 150 units rs 1.20/unit
// 4 : for unit above 250 rs 1.50/unit in additional surcharges of 20% is added to the total bill!!

#include <stdio.h>
void main(){
     float amt=0.0;
     int bu,u;
     printf("Enter bill unit : - ");
     scanf("%d",&bu);
     if(bu>250){
          u=bu -250;
          amt=u*1.50;
          bu-=u;

     }
     if(bu>150 && bu<=250){
          u=bu -150;
          amt=amt + u*1.20;
          bu-=u;
     }
     if(bu>50&&b<=150){
          u=bu-50;
          amt += u*.75;
          bu-=u;
     }
     If(bu>0&&bu<=50){
          amt+=bu*.50;
     }
     //getch();
     //clrscr();
}
