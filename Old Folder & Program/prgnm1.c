// question ➡️ WAP to input ant character and check wheter it is alphabate, digit or speacial character??

#include <stdio.h>
void main(){
     char ch;
     printf("Enter ant char to check it is alphabate, digit or speacial character :-");
     scanf("%d",&ch);
     if(ch >48 && ch <= 57){
          printf("%c is a digit");
     }else if(ch>=65 && ch <=90 || ch>=97 || && ch <= 122){
          printf("%c is a Alphabate character");
     }else if(!(ch>=48 && key<=57)&&!(ch>=65 && ch<=90)&& i(ch>=97 && ch <=122)){
          printf("%c is a speacial character");
     }
     //getch();
     //clrscr();
}
