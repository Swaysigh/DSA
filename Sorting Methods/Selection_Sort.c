#include <stdio.h>

void select_sort(int arr[], int n);

int main() {
    int arr[] = {1,3,5,7,2,4,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    select_sort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void select_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_ind = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        if (min_ind != i) {
            int temp = arr[i];
            arr[i] = arr[min_ind];
            arr[min_ind] = temp;
        }
    }
}
