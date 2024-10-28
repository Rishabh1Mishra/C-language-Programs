// Convert Fahrenheit to Celsius
# include<stdio.h>
int main()
{
	int Fahrenheit ,Celsisus;
	printf("Enter Fahrenheit Temprature :");
	scanf("%d",&Fahrenheit);
	Celsisus = (Fahrenheit - 32)*5/9;
	printf("Celsisus = %d",Celsisus);
	return 0;
}
