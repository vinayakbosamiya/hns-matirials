#include <stdio.h> 
void main()
{
    int a[100], n, lrg, i, j, k, p, digcnt, divsr, r;
    int bucktcnt[10], buckt[10][10];
    printf("\nEnter array size:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter array elements a[%d]:", i);
        scanf("%d", &a[i]);
    }
    i = 0;
    lrg = a[i];
    while (i < n) /* find the largest element in array */
    {
        if (a[i] > lrg)
            lrg = a[i];
        i++;
    }
    /*count the no of digit in the largest no*/ digcnt = 0;
    while (lrg > 0)
    {
        digcnt++;
        lrg = lrg / 10;
    }
    i = 1;
    divsr = 1;
    while (i <= digcnt)
    {
        j = 0;
        while (j < 10)
        {
            bucktcnt[j] = 0;
            j++;
        }
        j = 0;
        while (j < n)
        {
            r = (a[j] / divsr) % 10;
            buckt[r][bucktcnt[r]] = a[j];
            bucktcnt[r]++;
            j++;
        }
        /*collect all elements in order*/
        j = 0;
        p = 0;
        while (j < 10)
        {
            k = 0;
            while (k < bucktcnt[j])
            {
                a[p] = buckt[j][k];
                p++;
                k++;
            }
            j++;
        }
        i++;
        divsr = divsr * 10;
    }
    printf("\nSorted Elements:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}
