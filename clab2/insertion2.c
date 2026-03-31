#include<stdio.h>
int main()
{
        int a[6]={10,20,30,40,50},i,p,num;
        printf("Enter the position of the element:");
        scanf("%d",&p);
        printf("Enter the number to be inserted:");
        scanf("%d",&num);
        p=p-1;
        for(i=5;i>p;i--)
        {
                a[i]=a[i-1];
        }
        a[p]=num;
        printf("The Elements are:\n");
        for(i=0;i<6;i++)
        {
                printf("%d\n",a[i]);
        }
        return 0;
}
