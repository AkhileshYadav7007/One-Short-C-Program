#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int p = 1;
    for (int  i = 1; i<=n; i++)
    {
        p*= i;
    }
    printf("Factorial of %d is %d : ",n,p); 
    
    return 0;
}






























// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int p =1;
//     for (int  i = 1; i<= n; i++)
//     {
//         p*=i;
//     }
//     printf("Factorial of %d is %d : ",n,p);
    






//     return 0;

// }