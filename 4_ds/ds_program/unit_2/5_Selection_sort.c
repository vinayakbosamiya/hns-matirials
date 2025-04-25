#include <stdio.h>
void main()
{
    int a[100], i, j, n, temp, min;
    printf("enter size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element of array a[%d]", i);
        scanf("%d", &a[i]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("nSorted array");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}