#include<stdio.h>
int main(){
    int a;
    for(a=1; a<=10; a++){

        if(a==5)            // 5 no skip kore next sob print korbe
            continue; 
        printf("%d hi \n",a);
                  
        
    }
    return 0;
}