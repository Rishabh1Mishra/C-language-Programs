#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b == c)
    printf("This is equilateral");
    else if(a==b||b==c||c==a)
    printf("isosceles");
    else
    printf("scalene");
    return 0;
    
}