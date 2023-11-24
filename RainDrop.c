#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number%3==0)
    {
        printf("Pling");
    }
    if(number%5==0)
    {
        printf("Plang");
    }
    if(number%7==0)
    {
        printf("Plong");
    }
    if(number%3!=0&&number%5!=0&&number%7!=0)
    {
        printf("%d",number);
    }
}