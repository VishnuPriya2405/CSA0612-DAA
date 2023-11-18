#include<stdio.h>
int isprime(int n)
{
	if(n<=1)
	{
		return 0;
	}
	if(n<=3)
	{
		return 1;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("prime",n);
	}
	else
	{
		printf("not prime",n);
	}
	return 0;
}
