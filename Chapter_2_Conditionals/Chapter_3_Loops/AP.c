#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of terms : ");
    scanf("%d",&n);


//moathed 1
    // for(int  i=1; i<=4*n; i+3)
    // {
    //     printf("%d ",i);
    // }

    //moathed 2
    int a = 1;
    for (int  i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a=a + 2;
    }
    
    





    return 0;
}