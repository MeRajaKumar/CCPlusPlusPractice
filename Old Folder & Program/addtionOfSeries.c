// question ➡️ wap to display additions of series like 1^2 + 2^4 + 3^6 +....10^20??

#include <stdio.h>
void main(){
     int i,j,tot=0;
     for(i=1,j=2;i<=10;i++,j+=2){
          printf("%d ^ %d +",i,j);
          tot+=pow(i,j);
     }
     printf("\b = %d", tot);
     //getch();
     //clrscr();
}

