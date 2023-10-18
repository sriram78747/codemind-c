#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%2!=0)||(a%2==0&&6<=a&&a<=20))
    printf("weird");
    if(a%2==0&&2<=a&&a<=5)
    printf("not weird");
    else if(a%2==0&&a>=20)
    printf("not weird");
}