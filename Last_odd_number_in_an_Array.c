#include<stdio.h>
int main()
{
    int n,i,last_odd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            last_odd=arr[i];
        }
    }
    printf("%d",last_odd);
}