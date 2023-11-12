#include <stdio.h>
int* twoSum(int nums[], int size, int target) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = i + 1; j < size; ++j) 
        {
            if (nums[i] + nums[j] == target)
             {
                int *result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL; 
}
int main() 
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int Size = sizeof(nums) / sizeof(nums[0]);
    int *result = twoSum(nums, Size, target);
    if (result != NULL) 
    {
        printf("��ΪĿ��ֵ������������������: [%d, %d]\n", result[0], result[1]);
        free(result); 
    } else
    {
        printf("û���ҵ����������Ľ��\n");
    }
    return 0;
}
