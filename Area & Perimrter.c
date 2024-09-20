#include<stdio.h>
int main()
{
    int a = 5;
    int b = 6;
    int c = 7;
    //square area
   
    printf("%d\n",a*a);
    //square perimeter
 
    printf("%d\n",4*a);
    //rectangle area 
    
    printf("%d\n",a*b);
    //rectangle perimeter
    printf("%d\n",2 *(a+b));
    // triangle area 
    printf("%d\n",(a+b)/2);
    // triangle perimeter
    printf("%d\n",a+b+c);
    return 0;
}