#include<stdio.h>
int le(int size,int arr[])
{
	int largest=arr[0];
	for (int i=1;i<size;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	return largest;
}
int main()
{
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter elements:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int largest=le(size,arr);
	printf("largest element:%d",largest);
	return 0;
}
