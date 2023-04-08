/* average marks obtained by ten students in three sub of the exam */

#include<stdio.h>
int main(){
    int i,j;
    float sum=0,x,avg;

    for(i=1; i<=10; i++){
        printf("Please enter the students marks: ");

        for(j=1; j<=3; j++){
            scanf("%f",&x);
            sum = sum+x;        // sum += x
            
        }
        avg = sum/3;
        printf("The average is: %.2f\n",avg);
    }
    

    return 0;
}