#include<stdio.h>
int main(){
    int x;
    printf("Enter Your Maske : ");
    scanf("%d",&x);
//Mathod Number 1
    // if(x>=81 && x<=100) printf("Very Good ");
    // if(x>=61 && x<=80) printf("Good ");
    // if(x>=41 && x<=60) printf("Average");
    // if(x<=40 ) printf("Fail");




// //Mathod Number 2
//     if(x>=81) printf("Very Good");
//     else if(x>=61) printf("Good");
//      else if(x>=41) printf("Average");
//      else printf("Faile ");

// //Mathod Number 3

    if(x>=81) printf("Very Good");
    else{
            if(x>=61) printf("Good");
            else{
                    if(x>=41) printf("Average");
                    else{
                            if(x>=40) printf("Fail");

                    }

            }

    }







    return 0;

}