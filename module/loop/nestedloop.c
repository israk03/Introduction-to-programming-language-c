/* ekta loop er bhitore aro loop thakai hocche nested loop  */

#include<stdio.h>
int main(){
    int a,b,c;

    for(a=1; a<=2; a++){                    // ei loop 2 bar ghurbe
        for(b=1; b<=5; b++){                // ei loop 5 bar ghurbe
            for(c=1; c<=3; c++){            // ei loop 3 bar ghurbe
                printf("hello mf.\n");        // tahole hello mf total 2*5*3=30 bar print korbe
            }
        }
    }
    return 0;
}