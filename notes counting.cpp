//Currency Program To caluculate How many notes Of 2000,500,200,100,50,20,10,5,2,1.

#include<stdio.h>
int main()
{
	int n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	int value;
	int number=1;
	printf("Enter the value:");
	scanf("%d",&value);
	switch(number)
	{
		case 1:
			n2000=value/2000;
			value=value%2000;
			printf("Number of 2000 notes :%d\n",n2000);
	    case 2:
	    	n500=value/500;
			value=value%500;
			printf("Number of 500 notes :%d\n",n500);
		case 3:
			n200=value/200;
			value=value%200;
			printf("Number of 200 notes :%d\n",n200);
		case 4:
			n100=value/100;
			value=value%100;
			printf("Number of 100 notes :%d\n",n100);
		case 5:
			n50=value/50;
			value=value%50;
			printf("Number of 50 notes :%d\n",n50);
		case 6:
			n20=value/20;
			value=value%20;
			printf("Number of 20 notes :%d\n",n20);
		case 7:
			n10=value/10;
			value=value%10;
			printf("Number of 10 notes :%d\n",n10);
		case 8:
			n5=value/5;
			value=value%5;
			printf("Number of 5 notes :%d\n",n5);
		case 9:
			n2=value/2;
			value=value%2;
			printf("Number of 2 notes :%d\n",n2);
		case 10:
			n1=value/1;
			value=value%1;
			printf("Number of 1notes :%d\n",n1);
			default:
				printf("completed");
	}
	return 0;
}
