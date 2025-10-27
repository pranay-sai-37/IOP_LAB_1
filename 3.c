//programe to calculate gross salary

#include<stdio.h>

int main () 
{  
    int basic,gross,house,medical,transport,pf,it;
    
    printf("Enter your Basic Salary=");
    scanf("%d", &basic);
    
    printf("Enter your House Rent Allowance=");
    scanf("%d", &house);
    
    printf("Enter your Medical Allowance=");
    scanf("%d", &medical);
    
    printf("Enter your Transport Allownce=");
    scanf("%d", &transport);
    
    printf("Enter your Provident Fund=");
    scanf("%d", &pf);
    
    printf("Enter your Income Tax=");
    scanf("%d", &it);
    
    gross=basic+house+medical+transport-pf-it;
    
    printf("Gross Salary=%d",gross);
    
   
}
