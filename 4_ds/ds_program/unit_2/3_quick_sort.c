#include <stdio.h>

void quicksort(int[], int, int);

int main() {
    int a[] = {1, 66, 3, 8, 69};
    int n = sizeof(a) / sizeof(a[0]);

    quicksort(a, 0, n - 1);

    printf("\nSorted array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

void quicksort(int a[], int first, int last) {
    if (first >= last) return; 

    int pivot = a[last]; 
    int i = first - 1;

    for (int j = first; j < last; j++) {
        if (a[j] < pivot) {
            i++;
           
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
   
    int temp = a[i + 1];
    a[i + 1] = a[last];
    a[last] = temp;

    int pi = i + 1;

    quicksort(a, first, pi - 1);
    quicksort(a, pi + 1, last);
}
