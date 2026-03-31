#include<stdio.h>

int insertion(int a[],int n);
int deletion(int a[],int *n);
int merge(int a[],int *n);
int traversal(int a[],int n);

int main()
{
	int a[200],n,i,op;
	printf("Enter the number of elements of 1st array:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	do
	{

	printf("Enter the opertion you want to execute:\n 1-Insertion\n 2-Deletion\n 3-Merge\n 4-Traverson\n 5-Exit from the programme\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			insertion(a,n);
				break;
		case 2:
			deletion(a,&n);
				break;
		case 3:
			merge(a,&n);
                	        break;
		case 4:
			traversal(a,n);
                	        break;
		case 5:
                        printf("Exit programme\n");
                                break;
		default :
			printf("Invalid Selection\n");
	}
	}while(op!=5);
	return 0;
}

int insertion(int a[],int n)
{
	int i,num,pos;
	printf("Enter the number to be inserted:");
	scanf("%d",&num);
	printf("Enter the position of the element to be inserted:");
	scanf("%d",&pos);
	if (pos<1||pos>n+1)
	{
		printf("Invalid position");
	}
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=num;
	n++;
	printf("The new array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return n;
}

int deletion(int a[],int *n)
{
	int i,pos;
	printf("Enter the position of the element to be deleted:");
	scanf("%d",&pos);
	for(i=pos-1;i<*n;i++)
	{
		a[i]=a[i+1];
	}
	printf("The modified array is:");
	for(i=0;i<*n;i++)
	{
		printf("%d\n",a[i]);
	}
	return *n;
}

int merge(int a[],int *n)
{
 	int i,j,m;
 	printf("Enter the number of elements of 2nd array:");
 	scanf("%d",&m);
 	printf("Enter the elements:");
 	for (j=*n;j<(*n+m);j++)
	{
 	       scanf("%d",&a[j]);
 	}
	printf("The merged array is:\n");
	*n=*n+m;
	for(i=0;i<*n;i++)
	{
		printf("%d\n",a[i]);
	}
	return *n;
}

int traversal(int a[],int n)
{
	int i;
	printf("The array is:");
	for (i=0;i<n;i++)
	{
        	printf("%d\n",a[i]);
	}
	return n;
}
