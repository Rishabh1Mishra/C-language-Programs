# include<stdio.h>
int main()
{
    char  character;
    printf("enter the character\n: ");
    scanf("%s",&character);
 
    if (character=="a"||character=="e"||character=="i"||character=="o"||character=="u")
    {
        printf("the character is vowel");
    }
    else 
    {
        printf("the character is consonant");
    }
    return 0;
}