#include<stdio.h>
int main()
{
    int i,n,sum=0,flag=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            flag=1;
        }
    }
    if(flag==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}