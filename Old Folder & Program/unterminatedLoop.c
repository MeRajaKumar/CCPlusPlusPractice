// question ➡️ wap to display 1 to 100 by using unterminated loop??
// continue means ➡️ its a jumped statement used with loop block, its used 
                    //for transfer the control to the updation or conditon statement.

#include <stdio.h>
void main(){
     int i=0;
     for(i=1;;i++){
          printf("%d ",i);
          if(i==100)
          break;
     }
     //getch();
     //clrscr();
}
