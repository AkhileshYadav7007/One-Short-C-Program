#include<stdio.h>
int main(){
    int n;
    printf("Enter side of Square : ");
    scanf("%d",&n);
    
    //nested loops
    for(int  i=1; i<=n; i++) //rows
    {
        for(int j=1; j<=n; j++)  //cols
        {
            printf("* ");
        }
        printf("\n");
        
    }
    






     
    return 0;

}