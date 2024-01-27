#include<stdio.h>
int main(){
    int x ;
    printf("Enter a number : ");
    scanf("%d",&x);
    //&& stands for logical and
    if (x>99 && x<1000)
    printf("This is a Three Digit Number : ");
    else
    printf("Not a Three Digit Number : ");
    

    return 0;

}