#include <stdio.h>
void main()
{
    int a[100], n, i, j, k, tmp;
    printf("\nEnter array size:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter array element a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nUnsorted array");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (tmp < a[j])
            {
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
        printf("\nPass %d,element inserted at proper place:%d", i, tmp);
        for (k = 0; k < n; k++)
            printf("\t%d", a[k]);
        printf("\n");
    }
    printf("\n\nSorted array");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}