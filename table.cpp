//table of any number
#include<stdio.h>
int main()
{
	int num,i,result;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		result = num*i;
		printf("%d\n",result);
	}
	
	return 0;
}
