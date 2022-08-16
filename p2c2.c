#include <stdio.h>  
void printf_top(int n){  
    int i,j;
     for(i=1;i<=n;i++){  
        for(j=1;j<=2*n-1;j++){ 
            if(j<=i || (2*n-1)-j<i){ 
                printf("*");
            } 
            else{ 
                printf(" ");
            }
        } 
        printf("\n");
    } 
} 
void printf_bottom(int y){  
    int i,j;
for(i=y-2;i>0;i--){  
        for(j=1;j<=2*y-1;j++){ 
            if(j<=i || (2*y-1)-j<i){ 
                printf("*");
            } 
            else{ 
                printf(" ");
            }
        } 
        printf("\n"); 
    }
}
int main (){   
    int number;
    printf("Enter number : "); 
    scanf("%d",&number); 
    printf_top(number);  
    printf_bottom(number);

}