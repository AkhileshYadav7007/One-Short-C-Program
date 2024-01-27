#include<stdio.h>
int main(){
    int m;
    printf("Enter No of Row : ");
    scanf("%d ",&m);
    int n;
    printf("Enter No of cols : ");
    scanf("%d ",&n);

    //nested loops
    for(int  i = 1; i <=m; i++)
    {
        for(int  j = 1; j <=n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    






     
    return 0;

}