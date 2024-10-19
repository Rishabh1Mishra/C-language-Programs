#include<stdio.h>
int main()
{
	int a=0,b=1,result,n,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		printf("%d \n",a);
		result=a+b;
	     	a=b;
		  b=result;
		
	}
	return 0;
}
