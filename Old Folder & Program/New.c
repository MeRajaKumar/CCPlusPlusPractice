#include<stdio.h>
  int main(){
      int num,fact=1;
      printf("plz enter a number to print factorial of number :- ");
      scanf("%d",&num);
      if(num<0){
        printf("entered number is negative that is doesn't exit, try again");
      }
      else{
        while(num >0)
        {
         fact = fact * num;
         printf(" %d * ",num);
         num = num - 1;
        }      
        printf("\b=%d",fact);   
      }
      return 0;
 }