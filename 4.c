//program to covert temperature from fahrenheit to centigrade degrees

#include<stdio.h>
int main()
{   
    float ft,dc;
     printf("Enter the temperature in fahrenheit scale");
     scanf("%f", &ft);
     dc=(ft-32)*5/9;
     printf("Temperature in centigrade is  %f", dc);
}
