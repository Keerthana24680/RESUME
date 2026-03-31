#include<stdio.h>
void bubblesort(int a[],int n);

int main()
{
	int a[100],i,n;
	printf("How many numbers are there to sort:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a ,n);
	printf("The sorted elements are:\n");
        for (i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
	return 0;
}
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
