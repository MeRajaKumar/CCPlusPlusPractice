// question ➡️ Write a c program to input angles of a triangle and check whether triangle is valid or not??

#include <stdio.h>
void main(){
     int angle1,angle2,angle3,sum;
     printf("Enter first angle : - ");
     scanf("%d",&angle1);
     printf("Enter second angle :- ");
     scanf("%d",&angle2);
     printf("Enter third angle :- ");
     scanf("%d",&angle3);

     if(sum == 180 && angle1 >0 && angle2 >0 && angle3 >0){
          printf("Triangle is valid!");
     }else{
          printf("Triangle is not valid!");
     }

     //getch();
     //clrscr();
}
