#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
  
    if(a<b&&b-a>=2)
    {
    for(i=a+1;i<b;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
    }
}