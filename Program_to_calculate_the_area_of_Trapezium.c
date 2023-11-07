#include<stdio.h>
int main()
{
    int a,b;
    float h;
    float area;
    scanf("%d%d%f",&a,&b,&h);
    area=(((a+b)*h)/2);
    printf("%.4f",area);
}