#include<stdio.h>
int main()
{
        int i,p,*ptr,a[5]={10,20,30,40,50};
        ptr=&a[0];
        printf("Enter the position of the element:\n");
        scanf("%d",&p);
        p=p-1;
        for(i=p;i<5;i++)
        {
                *(ptr+i)=*(ptr+i+1);
        }
        printf("Array elements are:\n");
        for (i=0;i<4;i++)
        {
                printf("%d\n",*(ptr+i));
        }
        return 0;
}
