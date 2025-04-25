#include<stdio.h>
void main()
{ 
    int a[100],i,j,k,n,temp;
    printf("enter sizee of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter array element a[%d] ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        printf("\n pass %d element are: ",i+1);
        for(k=0;k<n;k++){
            printf("\t%d",a[k]);
        }
    }
    printf("\n After sorting array element are: \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}