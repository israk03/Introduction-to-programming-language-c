/* write a program which will take an integer N from user and print all the numbers between N to -32. 
stop your program when user will give N=-1 as input. */

#include<stdio.h>
int main(){
    int n,i;

    while(1){
        printf("Enter your value: \n");
        scanf("%d",&n);

        if(n==-1){
            printf("Enter a valid value.");
            break;
        }
        if(n>-32){
            for(i=n; i>=-32; i++){
                printf("%d",i);
            }
        }
        else{
            for(i=n; i<=-32; i--){
                printf("%d",i);
            }
        }
        
    }
    return 0; 
}