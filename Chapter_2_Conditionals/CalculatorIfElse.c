#include<stdio.h>
int main(){
     char ch;
    printf("Enter the oprator : ");
    scanf("%c",&ch);


    int a;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter 2st Number : ");
    scanf("%d",&b);
    
   
//Mathod Number 1

    if(ch=='+') printf("%d",a+b) ; 
    else if(ch=='-') printf("%d",a-b);
    else if(ch=='*') printf("%d",a*b);
    else if(ch=='/') printf("%d",a/b);
    else  printf("Invalid Oprator");
    
    // default:
    // printf("Invalid Operator");


//Mathod Number 2


    // switch (ch)
    // {
    // case '+':
    //     printf("%d",a+b);
    //     break;
    //     case '-':
    //     printf("%d",a-b);
    //     break;
    //     case '*':
    //     printf("%d",a*b);
    //     break;
    //     case '/':
    //     printf("%d",a/b);
    //     break;
    
    // default:
    // printf("Invalid Operator");
     
    return 0;

}