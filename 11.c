//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include<stdio.h>
int main ()
{ 
   int time,seconds,minutes,hours,r;
   
   printf("Enter time in seconds:");
   scanf("%d",&time);
   
   hours=time/3600;
   r=time-hours*3600;
   minutes=r/60;
   seconds=r-minutes*60;
   
   printf("Time in hours:%d\n",hours);
   printf("Time in minutes:%d\n",minutes);
   printf("Time in seconds:%d\n",seconds); 
    
}
