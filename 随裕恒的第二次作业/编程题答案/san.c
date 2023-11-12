#include <stdio.h>
int* end(int a[], int size) 
{  
    int *b = a + size;
    return b;
}
int main() {
    int a1[10] = {1, 2, 3, 4, 5};
    int a2[5] = {6, 7, 8, 9, 10};
    int size1 = 5;  
    int size2 = 5;  
    int *b = end(a1, size1);
     for (int i = 0; i < size2; i++) 
    {
        *(b + i) = a2[i];
    }
    int sum = size1 + size2;
    printf("合并后的数组: ");
    for (int i = 0; i < sum; i++)
    {
        printf("%d ", a1[i]);
    }
    return 0;
}
