// question ➡️ wap to display 1 to 30, 50 to 100,150 to 200??

#include <stdio.h>
void main(){
     int i=0;
     for(i=1;i<=200;i++){
          if(i>=30 && i<150 || i>100 && i<150){
               continue;
          }
          printf("%d+",i);
          tot+=i;
     }
     printf("%d",i);
     //getch();
     //clrscr();
}
