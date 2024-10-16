#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n&1==1){
        printf("odd num");

    }
    else{
        printf("even num");
    
    }
    return 0;
    
}