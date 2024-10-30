//Determine The Roots Of Quadratic Equation .
#include<stdio.h>
int main ()
{
	float a,b,c,d,r1,r2;
	printf("Enter The Value Of a,b,c\n");
	scanf("%f %f %f",&a,&b,&c);
	d= b*b -4*a*c;
	if(d==0)
	{
		printf("The Roots Are Real And Equal");
		r1 = -b/(2*a);
		r2 = -b/(2*a);
		printf("The root r1 is %f The root r2 is %f\n",r1,r2);
	}
	else if (d>0)
	{
		printf("The Roots Are Real And  Not Equal");
		r1 = (-b+((d))/(2*a))*1/2;
	    r2 = (-b+((d))/(2*a))*1/2;
	    printf("The root r1 is %f The root r2 is %f\n",r1,r2);
	    
		
	}
	else
	{
	
	printf("The Roots Are Imanaginary");
	
	}
	return 0;
	
	
	
	

	
}
