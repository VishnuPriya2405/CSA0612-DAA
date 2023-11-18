#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("\n enter a string:");
	scanf("%s",&str);
	printf("\n reverse string:%s",strrev(str));
	return 0;
}
