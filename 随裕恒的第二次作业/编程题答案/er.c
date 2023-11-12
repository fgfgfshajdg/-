#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct {
    int* array;
    size_t size;
    size_t capacity;
} 
DynamicArray;
DynamicArray* initArray() {
    DynamicArray* arr = (DynamicArray*)malloc(sizeof(DynamicArray));
    arr->array = (int*)malloc(SIZE * sizeof(int));
    arr->size = 0;
    arr->capacity = SIZE;
    return arr;
}
void insertElement(DynamicArray* arr, int element, size_t index)
 {
    if (index > arr->size) {
        printf("Index out of bounds.\n");
        return;
    }
     if (arr->size == arr->capacity) {
        arr->capacity *= 2;
        arr->array = (int*)realloc(arr->array, arr->capacity * sizeof(int));
    }
    for (size_t i = arr->size; i > index; i--) {
        arr->array[i] = arr->array[i - 1];
    }
     arr->array[index] = element;
    arr->size++;
}
void deleteElement(DynamicArray* arr, size_t index)
 {
    if (index >= arr->size) {
        printf("Index out of bounds.\n");
        return;
    }
    
    for (size_t i = index; i < arr->size - 1; i++) {
        arr->array[i] = arr->array[i + 1];
    }
    
    arr->size--;
}
void modifyElement(DynamicArray* arr, int element, size_t index)
 {
    if (index >= arr->size) {
        printf("Index out of bounds.\n");
        return;
    }
    
    arr->array[index] = element;
}
void freeArray(DynamicArray* arr)
 {
    free(arr->array);
    free(arr);
}

int main()
 {
    DynamicArray* myArray = initArray();

    insertElement(myArray, 5, 0); 
    insertElement(myArray, 10, 1);  
    modifyElement(myArray, 20, 1);
    deleteElement(myArray, 0); 
    for (size_t i = 0; i < myArray->size; i++) {
        printf("%d ", myArray->array[i]);
    }
    printf("\n");
    freeArray(myArray);
    return 0;
}
//���⸴�Ӻܶ࣬�޸�ָ��λ��Ԫ�صĺ���û��������������Ҳ�ܶ࣬Ҳ�ǰ�����ɵģ�����Ū��֮���Ǻܿ��ĵ�