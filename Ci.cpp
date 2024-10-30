// Calucalte Compound Interest .
#include<stdio.h>
int main()
{
	float P,r, t,A,CI;
	printf("Enter The P,r,t\n");
	scanf("%f %f %f",&P,&r,&t);
	
	
	 A = P+(1+r/100)*t;
	 CI = A - P;
	 printf("The Compound Interest Is : %.2f",CI);
	 return 0;
	
	
	return 0 ;
	
}
