// program to calculate simple interest 

#include<stdio.h>

int main()
{  

   int  principle_amount;
   float simple_interest,annual_rate,time;
   
   printf("Principle amount");
   scanf("%d", &principle_amount);
   
   printf("Annual rate of interest");
   scanf("%f", &annual_rate);
   
   printf("Time (in years)");
   scanf("%f", &time);
   
   simple_interest=(principle_amount*annual_rate*time)/100;
   
   printf("Simple Interest=%f",simple_interest);
   
}
