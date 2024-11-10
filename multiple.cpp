#include<stdio.h>
int main()
{
int i ,total =10;
for(i=1;i<=10;i++)
{
	switch(i)
	{
		case1:
		case4:
		case5:
		case7:
		total+=i;
		break;
		default:
		continue;	
	}
} printf("total =%d\t",total);
	return 0;
	
	
}
