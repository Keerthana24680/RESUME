#include<stdio.h>
int main()
{
	int i,max,num,sum=0;
	printf("How many numbers are there:");
	scanf("%d",&max);
	printf("Enter number 1:");
	scanf("%d",&num);
	sum=num;
	for(i=2;i<=max;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("THe sum of %d numbers is %d,\nAverage is %f\n",max,sum,(float)sum/max);
	return 0;
}
