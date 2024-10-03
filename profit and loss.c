#include<stdio.h>
int main()

{
  int CP,SP,Profit,loss;
  printf("enter the value of CP,SP");
  scanf("%d %d",&CP,&SP);
  if(CP<SP)
  {Profit=SP-CP;
  printf("The profit is%d",Profit);
  }else if  (CP>SP)
 
  printf(" loss ",loss);
  else
  printf("No profit no loss");
  return 0;
}