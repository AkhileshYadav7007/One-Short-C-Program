#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of terms : ");
    scanf("%d", &n);


    int a = 1;
    for(int  i = 1; i <=n; i++)
    {
        printf("%d ", a);
        a = a *3;
    }
    





    return 0;

}