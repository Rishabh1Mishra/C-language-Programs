#include<stdio.h>
int main()
{
    int a,b,choice;
    printf ("enter the value");
    scanf("%d %d",&a,&b);
    printf("enter choice\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("%d+%d=%d\n",a,b,(a+b));
               break;
        case 2:printf("%d-%d=%d\n",a,b,(a-b));
               break;
        case 3:printf("%d*%d=%d\n",a,b,(a*b));
               break;
        case 4:printf("%d/%d=%d\n",a,b,(a/b));
               break;
        default : printf("you enter wrong\n");
                break;
        
    }
    return 0;
}