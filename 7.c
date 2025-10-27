//7. PROGRAM TO CALCULATE AREA OF A TRIANGLE.
#include<stdio.h>
#include<math.h>
int main()
{
	float s,x,y,z,a;
	printf("Length of first side : ");
	scanf("%f",&x);
	printf("Length of second side : ");
	scanf("%f",&y);
	printf("Length of third side : ");
	scanf("%f",&z);
	s = (x+y+z)/2;
	a = sqrt((s)*(s-x)*(s-y)*(s-z));
	printf("Area of triangle : %f",a);
}
