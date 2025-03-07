// question ➡️ wap to check whether a character is uppercase or lowercase alphabet??

#include <stdio.h>
void main(){
     char a;
     printf("enter a character whether it is uppercase or lowercase :- ");
     scanf("%d",&a);
     if(a>=65 && a<=90){
          printf("%c is uppercase",a);
     }else if(a>=97 && a<=122){
          printf("%c is lowercase",a);
     }
      
     //getch();
     //clrscr();
}
