# include<stdio.h>
int main()
{
    int P,C,M,Rollno,per;
    char Studentname ;
    printf("Enter the name of the student:");
    scanf("%s",&Studentname);
    printf("enter the rollno");
    scanf("%d",&Rollno);
    printf("enter the subject marks:");
    scanf("%d %d %d",&P,&C,&M);
    per= (P+C+M)/3;
    if(per>=60)
    {
        printf("Grade A\n");
    }
    else if (per>=50)
    {
        printf("Grade B\n");
    }
    else
    {
        printf("fail");
    }
    return 0;

    

}