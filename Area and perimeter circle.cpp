//Area And Perimeter Of A Circle.
#include<stdio.h>
int main()
{
	float r,area,perimeter;
	printf("Enter the radius of Circle : ");
	scanf("%f",&r);
	area = 3.14*r*r;
	printf("The Area Of Circle Is :%.2f\n",area);
	perimeter = 2*3.14*r;
	printf("The Perimeter Of Circle Is: %.2f",perimeter);
	return 0 ;
	
}
