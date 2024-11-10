#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	if (marks>100){
	
	printf("error");
}
    else if(marks>=50){
	 printf("pass");
	}
	else {
	
    printf("fail");}
    return 0;
}
