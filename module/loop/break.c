#include<stdio.h>
int main(){
    int a;
    for(a=1; a<=10; a++){
        printf("%dhi \n",a);
        if(a==5)
            break;      // 5 no bar print kore loop theke ber hoye jabe
        printf("%dhello \n",a);
    }
    return 0;
}