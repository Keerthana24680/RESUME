#include<stdio.h>
int main()
{
	int arr[10],i;
	float sum=0,avg=0;
	printf("Enter the elements in the array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	avg=(sum/10);
	printf("The Sum and Average are %f and %f",sum,avg);
	return 0;
}
