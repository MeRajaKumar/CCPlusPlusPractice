// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Even number in array are: \n");
    int find_num[] = {12,3,4,5,60,5,88,45,46};
    int length = sizeof(find_num) / sizeof(find_num[0]);
    
    for(int i = 0;i < length; i++){
        if(find_num[i] %2 == 0){
            printf("%d ",find_num[i]);
        }
    }
    

    return 0;
}