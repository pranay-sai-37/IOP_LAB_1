// 10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
// FORMULA.
#include<stdio.h>
int main ()
{  
   float m,p,c,e,cm;
   
   printf("Enter your marks in Mathematic(out of 200): ");
   scanf("%f",&m);
   
   printf("Enter your marks in Physics(out of 200): ");
    scanf("%f",&p);
    
   printf("Enter your marks in Chemistry(out of 200): ");
   scanf("%f",&c);
   
   printf("Enter your marks in Entrance Examination(out of 100): ");
   scanf("%f",&e);
   
   cm=(m+p+c+2*cm)/2;
   printf("Cut off marks =%f",cm);
}
