#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number :");
    scanf("%d",&x);
    // || stands for logical OR
    if(x%5==0 || x%3==0)
    printf("Divisible By 5 or 3");
    else
    printf("Not Divisible By 5 or 3");
    return 0;

}
// Differnt between && and || operators