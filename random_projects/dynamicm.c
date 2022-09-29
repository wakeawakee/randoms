#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n,i;
    // printf("Enter the number you want");
    // scanf("%d",&n);
    ptr=(int*) calloc(2,sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("The number for %d:",i+1);
        scanf("%d",&ptr[i]);

    }


    for(i=0;i<5;i++)
    {
        printf("The number of are %d\n:",ptr[i]);
    }

    return 0;
}