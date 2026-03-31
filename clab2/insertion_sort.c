#include<stdio.h>
void insertionsort(int a[],int n);

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
        insertionsort(a ,n);
        printf("The sorted elements are:\n");
        for (i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
        return 0;
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while (j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
