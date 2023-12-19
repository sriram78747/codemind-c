#include<stdio.h>
int main()
{
    int i,f1,f2,f1_sum=0,f2_sum=0;
    scanf("%d%d",&f1,&f2);
    for(i=1;i<f1;i++)
    {
        if(f1%i==0)
        f1_sum=f1_sum+i;
    }
    for(i=1;i<f2;i++)
    {
        if(f2%i==0)
        f2_sum+=i;
    }
    if(f1_sum==f2&&f2_sum==f1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}