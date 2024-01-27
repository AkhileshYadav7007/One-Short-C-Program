#include<stdio.h>
int main(){
    int a;
    printf("Enter First Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter Second Number : ");
    scanf("%d",&b);
    int c;
    printf("Enter Third Number : ");
    scanf("%d",&c);
    if(a>=b && a>=c)
    printf("%d is Greatest!",a);
    if(b>=a && b>=c)
    printf("%d is Greatest!",b);
    if(c>=a && c>=b)
    printf("%d is Greatest!",c);


    return 0;

}