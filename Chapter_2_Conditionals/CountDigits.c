#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count = 0;
    while (n>0)
    {
        n = n/10;   //increment , work
        count ++;  //work


    }
    printf("Count of digits is %d : ");
    








    return 0;
}