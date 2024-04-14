#include <stdio.h>

int main()
{
    int elements, l, h, key, mid;
    l = 0;
    printf("enter the no. of elements :");
    scanf("%d", &elements);
    if (elements <= 0)
    {
        printf("Invalid input: Number of elements must be positive.\n");
        return 1;
    }
    h = elements - 1;
    int arr[elements];

    printf("Enter the elements in a sorted order :");
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element that has to be searched :");
        scanf("%d", &key);
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            printf("%d element present at the location %d\n", key, mid);
            return 0;
        }
        else if(key > arr[mid])
        {
            l = mid + 1;
        }
        else if(key < arr[mid])
        {
            h = mid - 1;
        }
    }
            printf("Element does not found");
            return 1;
}