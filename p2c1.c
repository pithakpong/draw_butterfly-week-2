#include <stdio.h> 
int main() 
{ 
    int input ,i,j; 
    printf("Enter number : "); 
    scanf("%d",&input);  
    for(i=1;i<=input;i++){  
        for(j=1;j<=2*input-1;j++){ 
            if(j<=i || (2*input-1)-j<i){ 
                printf("*");
            } 
            else{ 
                printf(" ");
            }
        } 
        printf("\n");
    } 
        for(i=input-2;i>0;i--){  
        for(j=1;j<=2*input-1;j++){ 
            if(j<=i || (2*input-1)-j<i){ 
                printf("*");
            } 
            else{ 
                printf(" ");
            }
        } 
        printf("\n"); 
    }
    return 0;
}