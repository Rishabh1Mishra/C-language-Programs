// Check number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int number;
    printf ("enter the number ");
    scanf("%d",&number);
    if (number >0)
    printf("number is postive",number);
    else if (number<0)
    printf("number is negative ",number);
    else
    printf("number is zero",number);
    return 0;
}