# include<stdio.h>
int main()
{
    int tem;
    printf("enter the value of temp");
    scanf("%d",&tem);
    if(tem<0)
    {
        printf("temperature is very cold ");
    }
    else if (tem<=10)
    {
        printf("temperature is cold");
    }
    else if (tem<20)
    {
        printf("temperature is normal");
    }
    else 
    {
        printf("temerature is hot");
    }
    return 0;


}