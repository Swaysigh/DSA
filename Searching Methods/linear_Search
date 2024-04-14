#include <stdio.h>

int linear_search(int arr[], int size, int target);

int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 60;
    int result = linear_search(arr, size, target);
    if (result != -1)
    {
       printf("The given %d element is present at Index: %d", target, result);
    }
    else
    {
        printf("element is not present");
    }
    return 0;
}

int linear_search(int arr[], int size, int target)
{
    int i = 0;
    while (i < size)
    {
    if (arr[i] == target)
    {
        return i;
    }
    i++;
    }
        return -1;
    }
