#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}
void z(int arr[], int size) 
{
    qsort(arr, size, sizeof(int), compare);
}
int main() 
{
    int a[] = {4, 2, 9, 1, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    z(a, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
