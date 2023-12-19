#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum,diff;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
       else if(arr[i]%2!=0)
        {
            diff+=arr[i];
        }
    }
    printf("%d",abs(sum-diff));
}