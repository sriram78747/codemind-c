#include<stdio.h>
int main()
{
    float cu,amount;
    scanf("%f",&cu);
    if(cu>0&&cu<=199)
    {
         amount=cu*1.20;
    }
    else if(cu>=200&&cu<400)
    {
        amount=cu*1.50;
    }
    else if(cu>=400&&cu<600)
    {
        amount=cu*1.80;
    }
    else if(cu>=600)
    {
        amount=cu*2.00;
    }
    if(amount<400)
    {
        printf("%.2f",amount+100);
    }
    else
    {
        printf("%.2f",amount+(amount*0.15));
    }
}