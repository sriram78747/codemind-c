#include<stdio.h>
int main()
{
    int n,l,f,sum;
    scanf("%d",&n);
    l=n%10;
    while (n>=10)
    {
        n=n/10;
    }
    f=n;
    printf("%d",sum=l+f);
}