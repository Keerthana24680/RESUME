#include<stdio.h>
int binarysearch (int a[],int n,int key);
int main()
{
	int a[100],i,n,key,result;
	printf("How many numbers are there:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	result=binarysearch( a, n, key);
	if(result==-1)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("Element found at position %d",result+1);
	}
	return 0;
}
int binarysearch (int a[],int n,int key)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if (a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
