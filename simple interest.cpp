// Calucalte Simple Interest .
#include<stdio.h>
int main()
{
	float p,r, t,SI;
	printf("Enter The p,r,t\n");
	scanf("%f %f %f",&p,&r,&t);
	SI = p*r*t/100;
	printf("The Simple Interest Is : %.2f",SI);
	return 0 ;
	
}
