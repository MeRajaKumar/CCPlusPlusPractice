// question ➡️ wap to check wheather a character is alphabe or not??

#include <stdio.h>
void main(){
     char key;
     printf("Enter a character to check that is alphabate or not :- ");
     if(key >=65 && key <90 || key >=90 && key <=122){
          printf("It is a alphabate", key);
     }else{
          printf("It is not alphabate",key);
     }
     //getch();
     //clrscr();
}
