#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%2!=0)
    printf("weird");
    else if (a%2==0)
    {
        if(a>2&&a<5)
        {
        printf("not weird");
        }
        if(a>6&&a<20)
        {
        printf("weird");
        }
        if(a>20)
        {
            printf("not weird");
        }
    }
}