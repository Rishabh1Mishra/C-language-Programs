//adding of digits of number
#include<stdio.h>
int main()
{
	int num,sum;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		sum = sum + num%10;
		num=num/10;
	}
	printf("%d\n",sum);
	return 0;
}

