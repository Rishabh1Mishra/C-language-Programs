#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter the digit a:\n");
    scanf("%d",&a);
    printf ("enter the digit b:\n");
    scanf("%d",&b);
    printf ("enter the digit c:\n");
    scanf("%d",&c);
    if (a>b&&a>c)
    printf("a is greatest\n");
    else if (b>a&&b>c)
    printf("b is greatest\n ");
    else if (c>a&&c>b)
    printf("c is greatest ");
    else 
    printf("all are equal");
    return 0;
}