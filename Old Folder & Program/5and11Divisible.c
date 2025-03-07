// Question ➡️ wap to check whether a number is divisible by 5 and 11 or not??

#include <stdio.h>
void main(){
     int x;
     printf("Enter a number to check number is divisible by 5 and 11 : -");
     scanf("%d",&x);
     
     if(x%5==0 && x%11==0 ){
          printf("%d is divisible by 5 and 11",x);
     }if(x%5!=0 && x%11!=0){
          printf("%d is not divisible by 5 and 11",x);
     }
     //getch();
     //clrscr();
}
