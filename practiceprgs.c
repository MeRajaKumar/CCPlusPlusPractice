// 1 wap to accept a single character and display it is a vowel, semi vowel, constant and not a character??
#include<stdio.h>
#include<conio.h>

void main(){
    char a;
    printf("enter a character : ");
    ch = getch();
    if(ch>'a' && ch<='z' || ch>='A' && ch<='z'){
        if ( ch== 'A' || ch == 'E' || ch == 'I' || ch == "O" || ch == "U" || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is vowel, ch");
        }else if(ch=='W' || ch=='w' || ch=='y' || ch=='Y'){
            printf("%c is semi vowel",ch)
        }else{
            printf("%c is constnant",ch);
        }
    }else{
        printf("%c is not a Alphabate",ch);
    }
}

// 2 program of double circular linked list
#include<stdio.h>
#include<conio.h>

Struct stu{
    int roll;
    char name[20];
    struct stu * next * per;
};

void main(){
   int totalnode;
   char ch;
   int pos, i;
   struct stu * start, *temp *p;
   start = NULL;
   temp = NULL;
   p=NULL;
   totalnode=0;
   start1;
   printf("operation of duuble circular linked list \n 1. create list : \n 2. Display all node : \n press any key to continue...");
   ch=getch();
}

// 3 accept a number and convert it into word eg- 1234 one thousand two hundred thrity four??
// 4 create a calender and calculate by using linked list??

// 5 wap to accept 10 number and display its missing number data?
void main(){
    int n[20]={1,2,3,4,5,6,7,8,9,10};
    int num[10],j,i;
    for(i=0;i<10;i++){
        printf("enter number : ");
        scanf("%s",&num[i]);
            for(j=0;j<10;j++){
                if(n[j]==num[i])
                n[j]=0;
            }
    }
    printf("missing data : ");
    for(i=0;i<20;i++){
        if(n[i]!=0)
        print("%d",n[i]);
    }
    getch();
}

// 6 wap to accept 2 string and compare it??

// 7 wap to accept a string and display it in  reverse oder??
void main(){
    int len=0,i,j;
    char nm[20],rev[20];
    print("enter your name :");
    scanf("%s",&nm);
    for(i=0;nm[i]!='\0';i++){
        len++;
    }
    for(j=0;i=len-1;i>=0;i--,j++){
        rev[j]=num[i];
        printf("string is : %s and reverse is : %s",nm,rev);
        getch();
    }
}


// 8 wap to accept a sting and count total number of character alphabates
// 9 wap to accept a string and count total no of characters alphabets in this string??
#
#
void main(){
    int count = 0;
    char nm [20];
    printf("enter your name: ");
    scanf("%s", &nm);
    for(i=0;nm[i!='\0';i++]){
        if((nm[i]>='A' && nm[i]<='Z') || (nm[i]>='a' && nm[i]<='z')){
            count++;
        }
    }
    printf("total number of char is %d in string %s",count,nm);
}


// 10 wap to accept string and display its reverse order??
#
#
void main(){
    int len =0,i;
    char nm[20];
    printf("enter your name: ");
    scanf("%s",&num);
    for(i=0;nm[i]!='\0';i++){
        len ++;

    }
    printf("\n reverse of string %s is : ", num);
    for(i=len-1;i>=0;i++){
        print("%c ",nm[i]);
    }
}

output: rounak singh -> hgniskanuor

// 11 wap to accept string and check it is palindrome or not??
#
#
void main(){
    char str1[20],str2[20];
    int flag=0, i,len=0,j;
    printf("enter string to check palindrome : ");
    scanf("%s",&str1);
    // find the length of string
    for(i=0;str1[i]!='\0';i++)
    len++;
    //now copy str1 to str2 in reverse order
    for(i=0,j=len-1;i<len;i++,j--)
    str2[i]=str1[j];
    str2[i]='\0';
    //now compare both string 
    for(i=0; ; i++){
        if(str1[i]=='\0' && str2[i]=='\0')
        break;
        flag=str1[i]-str2[i]
        if(str1[i]=='\0' || str2[i]=='\0')
        break;
    }
    if(flag==0)
    printf("%s is palindrome string",str1);
    else
    printf("%s is not palindrome string str1");
}