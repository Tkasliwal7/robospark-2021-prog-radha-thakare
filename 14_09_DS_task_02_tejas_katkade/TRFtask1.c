#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr1,*ptr2,n;
    printf("how many element u want in array:");
    scanf("%d",&n);
    ptr1=(int *)malloc(sizeof(int)*n);

    if(ptr1==NULL)
    {
        printf("memory not allocate");
    }
    else
    {
     printf("enter a array element:");
     for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr1[i]);
    }  printf("array element:");
     for(int i=0;i<n;i++)
    {
        printf("%d  ",ptr1[i]);
    } }

    printf("\n\nhow many element u want in array:");
    scanf("%d",&n);
     ptr2=(int *)calloc(n,sizeof(int));
     if(ptr2==NULL)
     {
         printf("memory no allocate");
     }
     else{
      printf("enter a array element:");
     for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr2[i]);
    } printf("array element:");
     for(int i=0;i<n;i++)
    {
        printf("%d  ",ptr2[i]);
    } }
    printf("\n\ngive new data size:");
    scanf("%d",&n);
    ptr2=(int*)realloc(ptr2,n*sizeof(int));
    if(ptr2==NULL)
    {
        printf("memory not allocat");
    }
    else{
                  printf("enter a array element:");
     for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr2[i]);
    }  printf("array element:");
     for(int i=0;i<n;i++)
    {
        printf("%d  ",ptr2[i]);
    }

    }



}
