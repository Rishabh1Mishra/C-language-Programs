# include<stdio.h>
int main()
{
    float unit , bill;
    int id;
    char custmername[20];
    printf("enter customer name : ");
    scanf("%s",&custmername);
    printf("enter unit : ");
    scanf("%f",&unit);
    printf("enter  id  no ");
    scanf("%d",&id);
   //  printf("enter the bill;:");
   // scanf("%f",&bill);
   if(unit<200)
   {
      bill = unit*1.20;
   }
    else if (unit>200&& unit<=400)
    {
        bill = unit*1.50;
    }
    else if (unit>400 && unit<600)
    {
        bill = unit*1.80;
    }
    else if (unit>=600)
    {
        bill = unit*2.00;
    }
    else
    {  
        printf("enter the value of unit");
    }
    printf("the totall bill = %f",bill);
    return 0;
    if (bill>=400)
    {
        bill = bill+bill*.15;
    }
    else if (bill<=100)
    {
        bill = 100;
        printf("total bill= %f",bill);
    }


 

    




}