#include<stdio.h>
int linear_search(int a[],int n,int key);
int main()
{
	int a[50],n,i,key,flag;
	printf("Enter the number of elements:");
	scanf("%d",&n);
        printf("Enter the numbers in sorted list:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched:");
        scanf("%d",&key);
	flag=linear_search(a, n, key);
	if(flag==-1)
	{
		printf("Number not found");
	}
	else
	{
		printf("Number found at position %d\n",flag+1);
	}
	return 0;
}
int linear_search(int a[],int n,int key)
{
	int i;
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
