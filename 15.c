//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include<stdio.h>
 int main()
 {  
     float sub_1,sub_2,sub_3,sub_4,sub_5;
     float percentage;
     
     printf("ENTER YOUR MARKS(out of 100)");
	 printf("\n");
	 
	 printf("Marks in 1st subject=");
	 scanf("%f", &sub_1);
	 
	 printf("Marks in 2st subject=");
	 scanf("%f", &sub_2);
 
     printf("Marks in 3st subject=");
	 scanf("%f", &sub_3);
	 
	 printf("Marks in 4st subject=");
	 scanf("%f", &sub_4);
	 
	 printf("Marks in 5st subject=");
	 scanf("%f", &sub_5);
	 
	 percentage=(sub_1+sub_2+sub_3+sub_4+sub_5)/5;
	 
	 printf("Percentage=%f\n",percentage);
	 
	 if(percentage>=91)
	 { printf("Your division is :A");
	 }
	 
	 else if(percentage<=90 && percentage>= 81)
	 { printf("Your division is :B");
	 }
	 
	 else if(percentage<=80 && percentage>= 71)
	 { printf("Your division is :C");
	 }
	 
	 else if(percentage<=70 && percentage>= 61)
	 { printf("Your division is :D");
	 }
	 
	 else if(percentage<=60 && percentage>= 51)
	 { printf("Your division is :E");
	 }
	 
	 else 
	 { printf("Your division is :F");
	 }
}
	 
	 

