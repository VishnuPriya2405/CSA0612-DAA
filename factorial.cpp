#include<stdio.h>
int main()
{
	int x,fact=1,n;
	printf("enter n:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		fact=fact*x;
	}
	printf("factorial of %d is:%d",n,fact);
	return 0;
}
