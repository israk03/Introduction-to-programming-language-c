#include<stdio.h>
int main(){
    int num[]={5, 4, 6, 4, 9};
    int value, pos=-1, i;

    printf("Enter the value you want to find: ");
    scanf("%d", &value);

    for(i=0; i<5; i++){
        if(value==num[i]){
            pos = i+1;
            break;
        }
    }
    if(pos == -1){
        printf("Value not found.");
    }
    else{
        printf("The value found at %d position.",pos);
    }
    return 0;
}