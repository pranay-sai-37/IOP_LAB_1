//8.PROGRAM TO CONVERT INTO NUMBER OF DAY,HOURS AND MINUTES
#include<stdio.h>
int main ()
{  
   int seconds,d,h,m,r,q;
   printf("Enter the time period of revolutin of earth(in seconds):");
   scanf("%d", &seconds);
   d=seconds/86400;
   
   r=seconds-(d*86400);
   h=r/3600;
   q=r-(h*3600);
   m=q/60; 
   
   printf("\n No. of day=%d",d);
   printf("\n No. of hours=%d",h);
   printf("\n No. of minute=%d",m);
}

