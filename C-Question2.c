
#include <stdio.h>
void calc(int a, int b, int c, float *avg, float *perc);
void main(){
    int a,b,c;
    float avg, perc;
    printf("Enter Marks of Sub 1: ");
    scanf("%d", &a);
    printf("Enter Marks of Sub 2: ");
    scanf("%d", &b);
    printf("Enter Marks of Sub 3: ");
    scanf("%d", &c);
    
    calc(a,b,c, &avg, &perc);
    printf("\nAverage of All marks is: %.2f\n", avg);
    printf("Percentage: %.2f%%", perc);
}

void calc(int a, int b, int c, float *avg, float *perc){
    *avg = ((a+b+c)/3.0);
    *perc = ((a+b+c)/300.0)*100;
}
