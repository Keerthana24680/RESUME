#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
        scanf("%d",&c);
	printf("Enter the numbers:");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements are:\n");
	for (i=0;i<r;i++)
        {
                for (j=0;j<c;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }
	printf("The transpose is:\n");
	for (i=0;i<c;i++)
        {
                for (j=0;j<r;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }
	return 0;
}
