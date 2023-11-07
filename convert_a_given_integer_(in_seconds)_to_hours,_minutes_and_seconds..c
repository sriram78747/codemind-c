#include<stdio.h>
int main()
{
    int a,h,m,s;
    scanf("%d",&a);
    h=a/3600;
    a%=3600;
    m=(a)/60;
    s=a%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}