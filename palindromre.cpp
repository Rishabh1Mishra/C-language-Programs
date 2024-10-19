//palindrome number
#include<stdio.h>
int main()
{
	int num,quant,res=0,rem;
	printf("Enter the number :");
	scanf("%d",&num);
	quant = num;
	while(quant!=0)
	{
		rem = quant%10;
		res=res*10+rem;
		quant=quant/10;
	}
	if(res==num){
	
	
	printf("This is palindrome number");
    }
    else
    {
		printf("this is not palindrome number");
	}
	return 0;
	
	
}
