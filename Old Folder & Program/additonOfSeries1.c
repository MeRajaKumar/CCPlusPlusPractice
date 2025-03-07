// question ➡️ wap to display additions of series like 1^3 + 2^3 + 3^3 +....10^3??

#include <stdio.h>
void main(){
     int i,tot=0;
     for(i=1;i<=10;i++){
          printf("%d ^ 3 +",i);
          tot+=pow(i,3);
     }
     printf("\b = %d", tot);
     //getch();
     //clrscr();
}
