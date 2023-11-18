#include<stdio.h>
#include<string.h>
int isPalindrome(const char*str) 
{
    int left=0,right=strlen(str)-1;
    while (right>left) 
	{
        if(str[left++]!=str[right--]) 
		{
            return 0; 
        }
    }
    return 1;
}
int main() 
{
    char input[100];
    printf("Enter a string:");
    scanf("%s",input);
    if (isPalindrome(input)) 
	{
        printf("Palindrome\n");
    } else 
	{
        printf("Not a palindrome\n");
    }

    return 0;
}

