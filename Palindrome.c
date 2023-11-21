#include<stdio.h>
int main()
{
    int n,num,rev=0,d;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rev=rev*10;
		d=n%10;
		n=n/10;
		rev=rev+d;
	}
	if(num==rev)
	printf("True");
	else
	printf("False");
}