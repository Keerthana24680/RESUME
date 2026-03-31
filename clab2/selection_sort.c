#include<stdio.h>
void selectionsort(int a[],int k);

int main()
{
	int a[100],i,k;
	printf("How many numbers are there to Sort:");
	scanf("%d",&k);
	printf("Enter the numbers :");
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}

	selectionsort(a,k);

	printf("The sorted elements are :\n");
	for(i=0;i<k;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;

}
void selectionsort(int a[],int k)
{
	int i,j,temp;
	for(i=0;i<k-1;i++)
        	{
                	for(j=i+1;j<k;j++)
                	{
                        	if(a[j]<a[i])
                        	{
                                	temp=a[j];
                        	        a[j]=a[i];
                	                a[i]=temp;
        	                }
	                }
	        }
}
