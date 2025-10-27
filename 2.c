// program to read marks of five subject of a student and calculate tatal and percentage

#include<stdio.h>

 int main()
 {  
     float sub_1,sub_2,sub_3,sub_4,sub_5,total;
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
	 
	 total=sub_1+sub_2+sub_3+sub_4+sub_5;
	 
	 percentage=(sub_1+sub_2+sub_3+sub_4+sub_5)/5;
	 
	 printf("Total marks=%f\n",total);
	 printf("Percentage=%f",percentage);

 }
