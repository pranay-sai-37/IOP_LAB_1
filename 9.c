//9.PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND

#include<stdio.h>
int main ()
{  

  int hr,min,sec,t_sec;
  printf("Enter time in hours: ");
  scanf("%d",&hr);
  
  printf("Enter time in minutes:");
  scanf("%d",&min);
  
  printf("Enter time in seconds:");
  scanf("%d",&sec);
  
  t_sec=hr*3600+min*60+sec;
  
  printf("\n");
  printf("TOTAL TIME IN SECONDS IS :%d",t_sec);	
	
}
