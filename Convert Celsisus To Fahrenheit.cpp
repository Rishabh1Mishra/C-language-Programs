//Convert celsisus to Fahrenheit.
#include<stdio.h>
int main()
{
	int Fahrenheit,celsisus;
	printf("Enter Temperature In Celsisus:");
	scanf("%d",&celsisus);
	Fahrenheit = celsisus*1.8+32;
	printf("Temparture In Fahrenheit%d",Fahrenheit);
	return 0;
}
