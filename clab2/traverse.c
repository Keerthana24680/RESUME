#include<stdio.h>
int main()
{
	int arr[50],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of the array are:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
	return 0;
}
