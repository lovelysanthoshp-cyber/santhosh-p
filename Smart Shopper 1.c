#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     float x,y,z;
     int a,b,c;
     int c1,q1;
     int c2,q2;
     int c3,q3;
     int budget;
    
    scanf("%d%d",&c1,&q1);
    scanf("%d%d",&c2,&q2);
    scanf("%d%d",&c3,&q3);
    scanf("%d",&budget);
    
    a=c1*q1;
    b=c2*q2;
    c=c3*q3;
    x= a+b+c;
    y= x/10;
    z=x+y;
    printf("Total (Before Tax): %.2f\n",x);
    printf("Total (After Tax): %.2f\n",z);
    
    if(z<=budget)
        printf("Within Budget");
    else
        printf("Over Budget");
    
    
    
    
         
   return 0;
}
