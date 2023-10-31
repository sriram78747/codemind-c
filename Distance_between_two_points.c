#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,dis;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    dis=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.4f",dis);
}